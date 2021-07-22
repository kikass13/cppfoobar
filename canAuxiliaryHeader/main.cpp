#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <ctype.h>
#include <libgen.h>
#include <time.h>
#include <errno.h>

#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/uio.h>
#include <net/if.h>

#include <linux/can.h>
#include <linux/can/raw.h>

#include "lib.h"

/* for hardware timestamps - since Linux 2.6.30 */
#ifndef SO_TIMESTAMPING
#define SO_TIMESTAMPING 37
#endif

/* from #include <linux/net_tstamp.h> - since Linux 2.6.30 */
#define SOF_TIMESTAMPING_SOFTWARE (1<<4)
#define SOF_TIMESTAMPING_RX_SOFTWARE (1<<3)
#define SOF_TIMESTAMPING_RAW_HARDWARE (1<<6)

#define MAXSOCK 16    /* max. number of CAN interfaces given on the cmdline */
#define MAXIFNAMES 30 /* size of receive name index to omit ioctls */
#define ANYDEV "any"  /* name of interface to receive from any CAN interface */

static __u32 dropcnt[MAXSOCK];
static __u32 last_dropcnt[MAXSOCK];
const int canfd_on = 1;
static volatile int running = 1;


static int  dindex[MAXIFNAMES];
static char devname[MAXIFNAMES][IFNAMSIZ+1];
static int  max_devname_len; /* to prevent frazzled device name output */


int idx2dindex(int ifidx, int socket)
{
    int i;
    struct ifreq ifr;

    for (i=0; i < MAXIFNAMES; i++) {
        if (dindex[i] == ifidx)
            return i;
    }

    /* create new interface index cache entry */

    /* remove index cache zombies first */
    for (i=0; i < MAXIFNAMES; i++) {
        if (dindex[i]) {
            ifr.ifr_ifindex = dindex[i];
            if (ioctl(socket, SIOCGIFNAME, &ifr) < 0)
                dindex[i] = 0;
        }
    }

    for (i=0; i < MAXIFNAMES; i++)
        if (!dindex[i]) /* free entry */
            break;

    if (i == MAXIFNAMES) {
        fprintf(stderr, "Interface index cache only supports %d interfaces.\n",
               MAXIFNAMES);
        exit(1);
    }

    dindex[i] = ifidx;

    ifr.ifr_ifindex = ifidx;
    if (ioctl(socket, SIOCGIFNAME, &ifr) < 0)
        perror("SIOCGIFNAME");

    if (max_devname_len < strlen(ifr.ifr_name))
        max_devname_len = strlen(ifr.ifr_name);

    strcpy(devname[i], ifr.ifr_name);

#ifdef DEBUG
    printf("new index %d (%s)\n", i, devname[i]);
#endif

    return i;
}


void intHandler(int dummy) {
    printf("CTRL+C catched!\n");
    running = 0;
}

int main(int argc, char **argv)
{
    fd_set rdfs;
    int s[1];
    int bridge = 0;
    useconds_t bridge_delay = 0;
    unsigned char timestamp = 0;
    unsigned char hwtimestamp = 0;
    unsigned char down_causes_exit = 1;
    unsigned char dropmonitor = 0;
    unsigned char extra_msg_info = 0;
    unsigned char silentani = 0;
    unsigned char color = 0;
    unsigned char view = 0;
    unsigned char log = 0;
    unsigned char logfrmt = 0;
    int count = 0;
    int rcvbuf_size = 0;
    int opt, ret;
    int currmax, numfilter;
    int join_filter;
    char *ptr, *nptr;
    struct sockaddr_can addr;
    char ctrlmsg[CMSG_SPACE(sizeof(struct timeval) + 3*sizeof(struct timespec) + sizeof(__u32))];
    struct iovec iov;
    struct msghdr msg;
    struct cmsghdr *cmsg;
    struct can_filter *rfilter;
    can_err_mask_t err_mask;
    struct canfd_frame frame;
    int nbytes, i, maxdlen;
    struct ifreq ifr;
    struct timeval tv, last_tv;
    struct timeval timeout, timeout_config = { 0, 0 }, *timeout_current = NULL;

    last_tv.tv_sec  = 0;
    last_tv.tv_usec = 0;

    signal(SIGINT, intHandler);

    printf("Parsing args!\n");

    while ((opt = getopt(argc, argv, "t:HciaSs:b:B:u:lDdxLn:r:heT:?")) != -1) {
        switch (opt) {
        case 't':
            timestamp = optarg[0];
            if ((timestamp != 'a') && (timestamp != 'A') &&
                (timestamp != 'd') && (timestamp != 'z')) {
                fprintf(stderr, "%s: unknown timestamp mode '%c' - ignored\n",
                       basename(argv[0]), optarg[0]);
                timestamp = 0;
            }
            break;

        case 'H':
            hwtimestamp = 1;
            break;

        case 'n':
            count = atoi(optarg);
            if (count < 1) {
                printf("%s", basename(argv[0]));
                exit(1);
            }
            break;

        default:
            printf("%s", (basename(argv[0])));
            exit(1);
            break;
        }
    }

    currmax = argc - optind; /* find real number of CAN devices */
    printf("%d\n", currmax);

    if (currmax > MAXSOCK) {
        fprintf(stderr, "More than %d CAN devices given on commandline!\n", MAXSOCK);
        return 1;
    }
    if(currmax <= 0){
        fprintf(stderr, "Please provide can device to listen to!\n");
        return 1;
    }

    printf("let's go!\n");

    for (i=0; i < currmax; i++)
    {

        ptr = argv[optind+i];
        nptr = strchr(ptr, ',');

#ifdef DEBUG
        printf("open %d '%s'.\n", i, ptr);
#endif
        printf("Creating Socket!\n");
        s[i] = socket(PF_CAN, SOCK_RAW, CAN_RAW);
        if (s[i] < 0) {
            perror("socket");
            return 1;
        }

        if (nptr)
            nbytes = nptr - ptr;  /* interface name is up the first ',' */
        else
            nbytes = strlen(ptr); /* no ',' found => no filter definitions */

        if (nbytes >= IFNAMSIZ) {
            fprintf(stderr, "name of CAN device '%s' is too long!\n", ptr);
            return 1;
        }

        if (nbytes > max_devname_len)
            max_devname_len = nbytes; /* for nice printing */

        addr.can_family = AF_CAN;

        memset(&ifr.ifr_name, 0, sizeof(ifr.ifr_name));
        strncpy(ifr.ifr_name, ptr, nbytes);

        printf("Using interface name '%s'.\n", ifr.ifr_name);

        if (strcmp(ANYDEV, ifr.ifr_name)) {
            if (ioctl(s[i], SIOCGIFINDEX, &ifr) < 0) {
                perror("SIOCGIFINDEX");
                exit(1);
            }
            addr.can_ifindex = ifr.ifr_ifindex;
        } else
            addr.can_ifindex = 0; /* any can interface */

        if (nptr) {

            /* found a ',' after the interface name => check for filters */

            /* determine number of filters to alloc the filter space */
            numfilter = 0;
            ptr = nptr;
            while (ptr) {
                numfilter++;
                ptr++; /* hop behind the ',' */
                ptr = strchr(ptr, ','); /* exit condition */
            }

            numfilter = 0;
            err_mask = 0;
            join_filter = 0;

            while (nptr) {

                ptr = nptr+1; /* hop behind the ',' */
                nptr = strchr(ptr, ','); /* update exit condition */

                if (sscanf(ptr, "%x:%x",
                       &rfilter[numfilter].can_id,
                       &rfilter[numfilter].can_mask) == 2) {
                    rfilter[numfilter].can_mask &= ~CAN_ERR_FLAG;
                    if (*(ptr+8) == ':')
                        rfilter[numfilter].can_id |= CAN_EFF_FLAG;
                    numfilter++;
                } else if (sscanf(ptr, "%x~%x",
                          &rfilter[numfilter].can_id,
                          &rfilter[numfilter].can_mask) == 2) {
                    rfilter[numfilter].can_id |= CAN_INV_FILTER;
                    rfilter[numfilter].can_mask &= ~CAN_ERR_FLAG;
                    if (*(ptr+8) == '~')
                        rfilter[numfilter].can_id |= CAN_EFF_FLAG;
                    numfilter++;
                } else if (*ptr == 'j' || *ptr == 'J') {
                    join_filter = 1;
                } else if (sscanf(ptr, "#%x", &err_mask) != 1) {
                    fprintf(stderr, "Error in filter option parsing: '%s'\n", ptr);
                    return 1;
                }
            }

            printf("Setting socketopt!\n");
            if (err_mask)
                setsockopt(s[i], SOL_CAN_RAW, CAN_RAW_ERR_FILTER,
                       &err_mask, sizeof(err_mask));

            if (join_filter && setsockopt(s[i], SOL_CAN_RAW, CAN_RAW_JOIN_FILTERS,
                              &join_filter, sizeof(join_filter)) < 0) {
                perror("setsockopt CAN_RAW_JOIN_FILTERS not supported by your Linux Kernel");
                return 1;
            }

            if (numfilter)
                setsockopt(s[i], SOL_CAN_RAW, CAN_RAW_FILTER,
                       rfilter, numfilter * sizeof(struct can_filter));

            free(rfilter);

        } /* if (nptr) */

        /* try to switch the socket into CAN FD mode */
        setsockopt(s[i], SOL_CAN_RAW, CAN_RAW_FD_FRAMES, &canfd_on, sizeof(canfd_on));

        if (rcvbuf_size) {

            int curr_rcvbuf_size;
            socklen_t curr_rcvbuf_size_len = sizeof(curr_rcvbuf_size);

            /* try SO_RCVBUFFORCE first, if we run with CAP_NET_ADMIN */
            if (setsockopt(s[i], SOL_SOCKET, SO_RCVBUFFORCE,
                       &rcvbuf_size, sizeof(rcvbuf_size)) < 0) {
#ifdef DEBUG
                printf("SO_RCVBUFFORCE failed so try SO_RCVBUF ...\n");
#endif
                if (setsockopt(s[i], SOL_SOCKET, SO_RCVBUF,
                           &rcvbuf_size, sizeof(rcvbuf_size)) < 0) {
                    perror("setsockopt SO_RCVBUF");
                    return 1;
                }

                if (getsockopt(s[i], SOL_SOCKET, SO_RCVBUF,
                           &curr_rcvbuf_size, &curr_rcvbuf_size_len) < 0) {
                    perror("getsockopt SO_RCVBUF");
                    return 1;
                }

                /* Only print a warning the first time we detect the adjustment */
                /* n.b.: The wanted size is doubled in Linux in net/sore/sock.c */
                if (!i && curr_rcvbuf_size < rcvbuf_size*2)
                    fprintf(stderr, "The socket receive buffer size was "
                        "adjusted due to /proc/sys/net/core/rmem_max.\n");
            }
        }

        if (timestamp || log || logfrmt) {

            if (hwtimestamp) {
                const int timestamping_flags = (SOF_TIMESTAMPING_SOFTWARE | \
                                SOF_TIMESTAMPING_RX_SOFTWARE | \
                                SOF_TIMESTAMPING_RAW_HARDWARE);

                if (setsockopt(s[i], SOL_SOCKET, SO_TIMESTAMPING,
                        &timestamping_flags, sizeof(timestamping_flags)) < 0) {
                    perror("setsockopt SO_TIMESTAMPING is not supported by your Linux kernel");
                    return 1;
                }
            } else {
                const int timestamp_on = 1;

                if (setsockopt(s[i], SOL_SOCKET, SO_TIMESTAMP,
                           &timestamp_on, sizeof(timestamp_on)) < 0) {
                    perror("setsockopt SO_TIMESTAMP");
                    return 1;
                }
            }
        }

        printf("Binding socket!\n");
        if (bind(s[i], (struct sockaddr *)&addr, sizeof(addr)) < 0) {
            perror("bind");
            return 1;
        }


    }

    /* these settings are static and can be held out of the hot path */
    iov.iov_base = &frame;
    msg.msg_name = &addr;
    msg.msg_iov = &iov;
    msg.msg_iovlen = 1;
    msg.msg_control = &ctrlmsg;

    printf("Receiving:\n\n");
    while (running)
    {

        FD_ZERO(&rdfs);
        for (i=0; i<currmax; i++)
            FD_SET(s[i], &rdfs);

        if (timeout_current)
            *timeout_current = timeout_config;

        if ((ret = select(s[currmax-1]+1, &rdfs, NULL, NULL, timeout_current)) <= 0) {
            perror("select");
            running = 0;
            continue;
        }

        for (i=0; i<currmax; i++) {  /* check all CAN RAW sockets */

            if (FD_ISSET(s[i], &rdfs))
            {

                int idx;

                /* these settings may be modified by recvmsg() */
                iov.iov_len = sizeof(frame);
                msg.msg_namelen = sizeof(addr);
                msg.msg_controllen = sizeof(ctrlmsg);
                msg.msg_flags = 0;

                nbytes = recvmsg(s[i], &msg, 0);
                idx = idx2dindex(addr.can_ifindex, s[i]);

                if (nbytes < 0) {
                    if ((errno == ENETDOWN) && !down_causes_exit) {
                        fprintf(stderr, "%s: interface down\n", devname[idx]);
                        continue;
                    }
                    perror("read");
                    return 1;
                }

                if ((size_t)nbytes == CAN_MTU)
                    maxdlen = CAN_MAX_DLEN;
                else if ((size_t)nbytes == CANFD_MTU)
                    maxdlen = CANFD_MAX_DLEN;
                else {
                    fprintf(stderr, "read: incomplete CAN frame\n");
                    return 1;
                }

                if (count && (--count == 0))
                    running = 0;

                if (bridge) {
                    if (bridge_delay)
                        usleep(bridge_delay);

                    nbytes = write(bridge, &frame, nbytes);
                    if (nbytes < 0) {
                        perror("bridge write");
                        return 1;
                    } else if ((size_t)nbytes != CAN_MTU && (size_t)nbytes != CANFD_MTU) {
                        fprintf(stderr,"bridge write: incomplete CAN frame\n");
                        return 1;
                    }
                }

                for (cmsg = CMSG_FIRSTHDR(&msg);
                     cmsg && (cmsg->cmsg_level == SOL_SOCKET);
                     cmsg = CMSG_NXTHDR(&msg,cmsg)) {
                    if (cmsg->cmsg_type == SO_TIMESTAMP) {
                        memcpy(&tv, CMSG_DATA(cmsg), sizeof(tv));
                    } else if (cmsg->cmsg_type == SO_TIMESTAMPING) {

                        struct timespec *stamp = (struct timespec *)CMSG_DATA(cmsg);

                        /*
                         * stamp[0] is the software timestamp
                         * stamp[1] is deprecated
                         * stamp[2] is the raw hardware timestamp
                         * See chapter 2.1.2 Receive timestamps in
                         * linux/Documentation/networking/timestamping.txt
                         */
                        tv.tv_sec = stamp[2].tv_sec;
                        tv.tv_usec = stamp[2].tv_nsec/1000;
                    } else if (cmsg->cmsg_type == SO_RXQ_OVFL)
                        memcpy(&dropcnt[i], CMSG_DATA(cmsg), sizeof(__u32));
                }

                /* check for (unlikely) dropped frames on this specific socket */
                if (dropcnt[i] != last_dropcnt[i]) {

                    __u32 frames = dropcnt[i] - last_dropcnt[i];


                    last_dropcnt[i] = dropcnt[i];
                }

                switch (timestamp) {

                case 'a': /* absolute with timestamp */
                    printf("(%010ld.%06ld) ", tv.tv_sec, tv.tv_usec);
                    break;

                case 'A': /* absolute with date */
                {
                    struct tm tm;
                    char timestring[25];

                    tm = *localtime(&tv.tv_sec);
                    strftime(timestring, 24, "%Y-%m-%d %H:%M:%S", &tm);
                    printf("(%s.%06ld) ", timestring, tv.tv_usec);
                }
                break;

                case 'd': /* delta */
                case 'z': /* starting with zero */
                {
                    struct timeval diff;

                    if (last_tv.tv_sec == 0)   /* first init */
                        last_tv = tv;
                    diff.tv_sec  = tv.tv_sec  - last_tv.tv_sec;
                    diff.tv_usec = tv.tv_usec - last_tv.tv_usec;
                    if (diff.tv_usec < 0)
                        diff.tv_sec--, diff.tv_usec += 1000000;
                    if (diff.tv_sec < 0)
                        diff.tv_sec = diff.tv_usec = 0;
                    printf("(%03ld.%06ld) ", diff.tv_sec, diff.tv_usec);

                    if (timestamp == 'd')
                        last_tv = tv; /* update for delta calculation */
                }
                break;

                default: /* no timestamp output */
                    break;
                }


                printf("%*s   ", max_devname_len, devname[idx]);

                fprint_long_canframe(stdout, &frame, NULL, view, maxdlen);

                printf("\n");
            }
        }
    }

    for (i=0; i<currmax; i++)
        close(s[i]);

    if (bridge)
        close(bridge);


    return 0;
}
