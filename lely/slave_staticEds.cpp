#include <iostream>

/// kikass13
/// see random gitter help here:
/// https://gitter.im/lely_industries/canopen?at=60018ffe5562a61e9aa8feeb

#include <lely/ev/loop.hpp>

#include <lely/io2/sys/io.hpp>
#include <lely/io2/sys/sigset.hpp>
#include <lely/io2/linux/can.hpp>
#include <lely/io2/posix/poll.hpp>
#include <lely/io2/sys/timer.hpp>
#include <lely/io2/can_net.h>
#include <lely/co/nmt.hpp>
#include <lely/co/time.h>
#include <lely/co/sdev.h>
#include <lely/co/sdo.h>


/// kikass13:
/// include generated (convertEds2Hpp) slave definition
/// instead of loading the .eds file dynamically at runtime
#include "eds/eds-slave.hpp"

///kikass13:
/// and embedded example can be found here:
/// https://gitlab.com/lely_industries/lpc17xx/-/blob/master/src/main.c

using namespace lely;


static void on_nmt_cs(co_nmt_t *nmt, co_unsigned8_t cs, void *data);
static void on_time(co_time_t *time, const struct timespec *tp, void *data);
static co_unsigned32_t on_dn_2000_00(co_sub_t *sub, struct co_sdo_req *req, void *data);
static co_unsigned32_t on_up_2001_00(const co_sub_t *sub, struct co_sdo_req *req, void *data);


int main() 
{
  /// Initialize the I/O library.
    io_init();
    // Create an I/O context to synchronize I/O services during shutdown.
    io_ctx_t *ctx = io_ctx_create();
    // Create an platform-specific I/O polling instance to monitor the CAN bus, as
    // well as timers and, optionally, signals.
    io_poll_t *io_poll = io_poll_create(ctx, 0);
    // Obtain a pointer to the platform-independent polling interface.
    ev_poll_t *ev_poll = io_poll_get_poll(io_poll);
    // Create a polling event loop. If no tasks are pending, the event loop will
    // poll for I/O events.
    ev_loop_t *loop = ev_loop_create(ev_poll, 0, 0);
    // I/O devices only need access to the executor interface of the event loop.
    ev_exec_t *exec = ev_loop_get_exec(loop);
    // Create a timer using a monotonic clock.
    io_timer_t *timer = io_timer_create(io_poll, exec, CLOCK_MONOTONIC);
    // Create a SocketCAN CAN controller (a handle to the network interface). This
    // controller instance can be shared between multiple CAN channels.
    io_can_ctrl_t *ctrl = io_can_ctrl_create_from_name("vcan0", 100);
    // If the controller is stopped, restart it.
    if (io_can_ctrl_stopped(ctrl))
        io_can_ctrl_restart(ctrl);

    // Create a SocketCAN CAN channel (a handle to the socket).
    io_can_chan_t *chan = io_can_chan_create(io_poll, exec, 0);
    // Open the channel and enable the reception of error frames.
    io_can_chan_open(chan, ctrl, IO_CAN_BUS_FLAG_ERR);

    // Create a "CAN network interface", which handles timer and CAN bus I/O for the
    // CANopen stack. This interface is the exclusive user of the specified 'timer'
    // an 'chan' instances. If the application needs timers or CAN channels for
    // other purposes, new instances have to be created.
    io_can_net_t *net = io_can_net_create(exec, timer, chan, 0, 0);

    // Create a dynamic object dictionary from the static object dictionary.
    /// kikass13:
    /// MySlave1 is the variable name of the generated device description 
    co_dev_t *dev = co_dev_create_from_sdev(&MySlave1);

    // Create the CANopen NMT service (which manages the other CANopen services).
    /// kikass13:
    /// there is some kind of typing error, so I am forcing this t be a 
    /// can_net_t* instead of a io_can_net_t*
    can_net_t* netCast = (can_net_t*)io_can_net_get_net(net);
    co_nmt_t* slave = co_nmt_create(netCast, dev);
    
    /// kikass13:
    /// set slave id to something proper
    co_nmt_set_id(slave, 0x02);

    // Start the NMT service by resetting the node. This will immediately send the
    // NMT boot-up message.
    co_nmt_cs_ind(slave, CO_NMT_CS_RESET_NODE);

    // Set the NMT indication function _after_ the initial reset; otherwise
	// we create a reset loop.
	co_nmt_set_cs_ind(slave, &on_nmt_cs, NULL);

    /// kikass13:
    /// do nothing with time here	
    // Set the TIME indication function. This can only be done when the TIME
	// service is active.
	//co_time_set_ind(co_nmt_get_time(nmt), &on_time, NULL);

    
	// Set the download (SDO write) indication function for sub-object
	// 2000:01.
	co_sub_set_dn_ind(co_dev_find_sub(dev, 0x2000, 0x00), &on_dn_2000_00, NULL);
    /*
	// Set the upload (SDO read) indication function for sub-object 2001:01.
	co_sub_set_up_ind(co_dev_find_sub(dev, 0x2001, 0x00), &on_up_2001_00, NULL);
    */

    // Run the event loop until no tasks remain (or the I/O context is shut down).
    // This runs the event loop and does not return until io_ctx_shutdown(ctx) is called.
    for(;;){
        auto result = ev_loop_run(loop);
        /// 0 result means "nothing done"
        /// 1 result means, something done
    }


    /// cleanup once loop returns
    co_nmt_destroy(slave);
    co_dev_destroy(dev);

    can_net_destroy(netCast);

    io_can_chan_destroy(chan);
    io_can_ctrl_destroy(ctrl);
    io_timer_destroy(timer);

    ev_loop_destroy(loop);
    io_poll_destroy(io_poll);
    io_ctx_destroy(ctx);
    io_fini();

    return 0;
}


/// kikass13:
/// 
/// used by  co_time_set_ind() to set the indication function invoked when a CANopen time stamp is received.
static void on_time(co_time_t *time, const struct timespec *tp, void *data){
	(void)time;
	(void)data;

	// Update the wall clock, _not_ the monotonic clock used by the CAN network.
	clock_settime(CLOCK_REALTIME, tp);
}



/// kikass13:
/// nmt state command received (indication) function
static void on_nmt_cs(co_nmt_t *nmt, co_unsigned8_t cs, void *data){
	(void)data;
	switch (cs) {
	case CO_NMT_CS_START:
		/// kikass13:
        /// do nothing with time here
		
        // Reset the TIME indication function, since the service may
		// have been restarted.
        //co_time_set_ind(co_nmt_get_time(nmt), &on_time, NULL);
		break;
	case CO_NMT_CS_STOP:
		break;
	case CO_NMT_CS_ENTER_PREOP:
		/// kikass13:
        /// do nothing with time here

        //co_time_set_ind(co_nmt_get_time(nmt), &on_time, NULL);
		break;
	case CO_NMT_CS_RESET_NODE:
		// Initiate a system reset.
		exit(0);
		break;
	case CO_NMT_CS_RESET_COMM:
		break;
	}
}


static co_unsigned32_t on_dn_2000_00(co_sub_t *sub, struct co_sdo_req *req, void *data){
    std::cerr << "on_dn_2000_00()" << std::endl;
	assert(sub);
	assert(co_obj_get_idx(co_sub_get_obj(sub)) == 0x2000);
	assert(co_sub_get_subidx(sub) == 0x00);
	assert(req);
	// The data pointer can be used to pass user-specified data to the
	// callback function. It is the last argument passed to
	// co_sub_set_dn_ind().
	(void)data;

	co_unsigned32_t ac = 0;

	co_unsigned16_t type = co_sub_get_type(sub);
	assert(type == CO_DEFTYPE_UNSIGNED32);

	// This callback is invoked for every SDO CAN frame. Unless the value is
	// too large to be held in memory (for example, during a firmware
	// update), it is more convenient to wait until the entire value is
	// received. This is what the following call is designed to do. It
	// returns -1 with ac == 0 if more CAN frames are pending.
	union co_val val;
	if (co_sdo_req_dn_val(req, type, &val, &ac) == -1)
		return ac;

    bool error = false;
	// Check if the value is valid.
	if (val.u32 != 42) {
		ac = CO_SDO_AC_PARAM;
		error = true;
	}

    if(!error){
        // TODO: Do something with val.u32.

        // Write the temporary value to the local object dictionary.
        co_sub_dn(sub, &val);
    }
    
	// Finalize the temporary value. This is only necessary to cleanup array
	// values, but it is a good practice to always include it.
	co_val_fini(type, &val);
	return ac;
}

static co_unsigned32_t on_up_2001_00(const co_sub_t *sub, struct co_sdo_req *req, void *data)
{
    std::cerr << "on_up_2001_00()" << std::endl;
	assert(co_obj_get_idx(co_sub_get_obj(sub)) == 0x2001);
	assert(co_sub_get_subidx(sub) == 0x00);
	assert(req);
	(void)data;

	co_unsigned16_t type = co_sub_get_type(sub);
	assert(type == CO_DEFTYPE_UNSIGNED32);

	// TODO: Obtain value from somewhere.
	co_unsigned32_t val = 42;

	// Store the value in the send buffer.
	co_unsigned32_t ac = 0;
	co_sdo_req_up_val(req, type, &val, &ac);
	return ac;
}
