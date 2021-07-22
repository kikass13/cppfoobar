#include <assert.h>
#include <netinet/ip.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <arpa/inet.h>
#include <netdb.h>
#include <memory.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <errno.h>
#include <stdlib.h>


#define HOST "127.0.0.1"
#define PORT 9090

struct sockaddr_in addr;

void test_setsockopt(){
  int priority = 6;
  int iptos = IPTOS_CLASS_CS6;
  int fd = socket(AF_INET, SOCK_STREAM, 0);
  if(setsockopt(fd, SOL_SOCKET, SO_PRIORITY, &priority, sizeof(int)) < 0){
    printf("Oh no1\n");
  }

  int tos = -1;
  socklen_t optlen;
  if (getsockopt(fd, IPPROTO_IP, IP_TOS, &tos, &optlen) < 0){
    printf("Oh no2\n");
  }
  if (tos == 0){
    printf("The man page lies or the kernel is buggy\n");
    printf("setsockopt(SO_PRIORITY) didn't set the IP type-of-service (TOS) field.\n");
  } else {
    printf("the man page doesn't lie\n");
  }

  addr.sin_family = AF_INET;
  addr.sin_port = htons(PORT);
  addr.sin_addr.s_addr = inet_addr(HOST);
  const char* msg = "Jane Doe is 1337";
  size_t msg_length = strlen(msg);
  sendto(fd, msg, sizeof(msg), 0,(struct sockaddr *)&addr, optlen);

    // done
  close(fd);
}

int main(void){
  // background: https://ocrete.ca/2009/07/24/when-a-man-page-lies/
  test_setsockopt();
  return 0;
}