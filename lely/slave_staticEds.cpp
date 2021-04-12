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

/// kikass13:
/// include generated (convertEds2Hpp) slave definition
/// instead of loading the .eds file dynamically at runtime
#include "eds-slave.hpp"

///kikass13:
/// and embedded example can be found here:
/// https://gitlab.com/lely_industries/lpc17xx/-/blob/master/src/main.c

using namespace lely;

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
    co_nmt_t* nmt = co_nmt_create(netCast, dev);
    
    // Start the NMT service by resetting the node. This will immediately send the
    // NMT boot-up message.
    co_nmt_cs_ind(nmt, CO_NMT_CS_RESET_NODE);

    // Run the event loop until no tasks remain (or the I/O context is shut down).
    // This runs the event loop and does not return until io_ctx_shutdown(ctx) is called.
    for(;;){
        auto result = ev_loop_run(loop);
        /// 0 result means "nothing done"
        /// 1 result means, something done
    }


    /// cleanup once loop returns
    co_nmt_destroy(nmt);
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


