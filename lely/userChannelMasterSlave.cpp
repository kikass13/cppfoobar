// from
/// Jos Seldenthuis [lely]

#include <lely/coapp/fiber_driver.hpp>
#include <lely/coapp/master.hpp>
#include <lely/coapp/slave.hpp>
#include <lely/ev/loop.hpp>
#include <lely/io2/user/can.hpp>
#include <lely/io2/user/timer.hpp>
#include <lely/io2/sys/clock.hpp>
#include <lely/io2/sys/io.hpp>

#include <iostream>

using namespace lely;

class MySlave : public canopen::BasicSlave {
 public:
  using BasicSlave::BasicSlave;

 protected:
  // This function gets called every time a value is written to the local object
  // dictionary by an SDO or RPDO.
  void OnWrite(uint16_t idx, uint8_t subidx) noexcept override {
    if (idx == 0x4000 && subidx == 0) {
      // Read the value just written to object 4000:00, probably by RPDO 1.
      uint32_t val = (*this)[0x4000][0];
      std::cout << "slave: received " << val << std::endl;
      // Copy it to object 4001:00, so that it will be sent by the next TPDO.
      (*this)[0x4001][0] = val;
    }
  }
};

// This driver inherits from FiberDriver, which means that all CANopen event
// callbacks, such as OnBoot, run as a task inside a "fiber" (or stackful
// coroutine).
class MyDriver : public canopen::FiberDriver {
 public:
  using FiberDriver::FiberDriver;

 private:
  // This function gets called every time a value is written to the local object
  // dictionary of the master by an RPDO (or SDO, but that is unlikely for a
  // master), *and* the object has a known mapping to an object on the slave for
  // which this class is the driver. The 'idx' and 'subidx' parameters are the
  // object index and sub-index of the object on the slave, not the local object
  // dictionary of the master.
  void OnRpdoWrite(uint16_t idx, uint8_t subidx) noexcept override {
    if (idx == 0x4001 && subidx == 0) {
      // Obtain the value sent by PDO from object 4001:00 on the slave.
      uint32_t val = rpdo_mapped[0x4001][0];
      std::cout << "master: received " << val << std::endl;
      // Increment the value and store it to an object in the local object
      // dictionary that will be sent by TPDO to object 4000:00 on the slave.
      tpdo_mapped[0x4000][0] = ++val;
    }
  }
};

// This function is invoked by a user-defined timer whenever the expiration time
// is updated. This information can be used to make the main loop more
// efficient, but nothing needs to be done to obtain a functioning tiomer.
void on_next(const timespec* tp, void* arg) {
  (void)tp;
  (void)arg;
}

// This function is invoked by a user-defined CAN channel whenever a CAN frame
// needs to be written. In this case we forward the frame to the other channel.
int on_write(const can_msg* msg, int timeout, void* arg) {
  // The user-defined argument is a pointer to a pointer to the other channel.
  auto& chan = **static_cast<io::UserCanChannel**>(arg);
  // Post a task to process the CAN frame. This prevents nesting in the CAN
  // frame handlers. And since we're postponing the handling of the frame, we
  // need to create a copy.
  const can_msg msg_ = *msg;
  chan.get_executor().post([=, &chan]() {
    chan.on_read(&msg_, timeout);
  });
  return 0;
}

int main() 
{
  /// #################
  /// ###### PRE
  /// kikass13:
  /// Initialize gurads, context and loop for flow control and event handling
  /// The event loop and executor can be utilized multiple times 

  // Initialize the I/O library. This is required on Windows, but a no-op on
  // Linux (for now).
  io::IoGuard io_guard;
  // Create an I/O context to synchronize I/O services during shutdown.
  io::Context ctx;
  // Create a non-polling event loop.
  ev::Loop loop;
  auto exec = loop.get_executor();

  /// #################
  /// ###### TIMERS

  // Obtain the current time from the monotonic clock. This can be replaced by
  // any other type of clock.
  auto now = io::clock_monotonic.gettime();

  // Create a user-defined channel for exclusive use by the slave. We register
  // an on_next() callback to demonstrate the syntax, but the callback doesn't
  // actually (need to) do anything.
  io::UserTimer stimer(ctx, exec, &on_next, nullptr);
  // Create a user-defined channel for exclusive use by the master.
  io::UserTimer mtimer(ctx, exec, &on_next, nullptr);
  // Initialize the internal clock of the timer.
  stimer.get_clock().settime(now);
  mtimer.get_clock().settime(now);

  /// #################
  /// ###### CHANNELS
  /// kikass13:
  /// create two channels which will refer to each other respectively by utilizing the same on_write() function
  /// each channel will call that function if something has to be written, and write it into the receive buffer
  /// of the other channel (master -> slave and vice versa)
  /// this can of course be utilized to define or use our own can send / receive buffering handling on top
  /// #################

  // The on_write() functions for the CAN channels of the master and slave need
  // to refer to the other channel. This creates a chicken-and-egg problem. To
  // solve it, we pass the callbacks a pointer to a pointer which will later be
  // initialized with the address of the other channel.
  io::UserCanChannel* tmpSchan{nullptr};
  io::UserCanChannel* tmpMchan{nullptr};

  // Create a user-defined CAN channel for exclusive use by the slave. The
  // channel uses the default values for the flags, receive queue length and
  // timeout. The on_write() callback will send the CAN frame to the channel of
  // the master.
  io::UserCanChannel schan(ctx, exec, io::CanBusFlag::NONE, 0, 0, &on_write, &tmpMchan);
  // Initialize a reference to the slave CAN channel for use by the master.
  tmpSchan = &schan;
  // Create a user-defined CAN channel for exclusive use by the master.
  io::UserCanChannel mchan(ctx, exec, io::CanBusFlag::NONE, 0, 0, &on_write, &tmpSchan);
  // Initialize a reference to the master CAN channel for use by the slave.
  tmpMchan = &mchan;

  /// #################
  /// ###### MASTER / SLAVE  
  /// kikass13:
  /// for Master:
  ///   * create the master
  ///   * create a driver for each slave to be handled
  /// for slave:
  ///   * create the slave(s)
  // Create a CANopen master with node-ID 1. The master is asynchronous, which
  // means every user-defined callback for a CANopen event will be posted as a
  // task on the event loop, instead of being invoked during the event
  // processing by the stack.
  canopen::AsyncMaster master(mtimer, mchan, "eds/master.dcf", "", 1);

  // Master:Create a driver for the slave with node-ID 2.
  MyDriver driver(exec, master, 2);

  // Create a CANopen slave with node-ID 2.
  MySlave slave(stimer, schan, "eds/cpp-slave.eds", "", 2);

  /// #################
  /// ###### START

  // Start the NMT services of the slave and master by pretending to receive a 'reset node' command
  slave.Reset();
  master.Reset();

  // Busy loop without polling.
  for (;;) {
    // Update the internal clocks of the timers.
    auto now = io::clock_monotonic.gettime();
    stimer.get_clock().settime(now);
    mtimer.get_clock().settime(now);

    // Execute all pending tasks without waiting.
    loop.poll();
  }

  return 0;
}
