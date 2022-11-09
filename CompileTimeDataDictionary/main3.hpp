#pragma once

#include <chrono>
#include <iostream>

#include <array>

/// #################### STUFF ##################

template <typename E>
constexpr typename std::underlying_type<E>::type to_underlying(E e) noexcept {
  return static_cast<typename std::underlying_type<E>::type>(e);
}

using TimeStamp = std::chrono::time_point<std::chrono::high_resolution_clock,
                                          std::chrono::microseconds>;

enum class Blinker : uint8_t { BOff = 0 };

enum class Indicator : uint8_t { Off };

enum class Current : uint8_t { mA1000 = 0 };

enum class FuseMapping : uint8_t { X = 0 };

enum class StateMapping : uint8_t { S_UNDEFINED = 0 };
enum class ErrorMapping : uint8_t { E_UNDEFINED = 0 };

enum class DcMotorState : uint8_t { Forward = 0, Backward = 1, Off = 0xff };

enum Batteries { B1, B2 };

struct BatteryState {
  float v1;
  float v2;
  float v3;
};
static constexpr std::size_t BatteryCount = 3;
static constexpr std::size_t FuseCount = 30;

enum class DcMotorId : uint8_t {
  Motor1 = 1,
  Motor2 = 2,
  Motor3 = 3,
  Motor4 = 4
};

enum class BatteryLockState : uint8_t { X = 0 };

struct BatteryDoorInfo {
  bool leftHatchClosed;
  bool rightHatchClosed;
  bool backDoorClosed;
};

///###########################

struct IndicatorData {
  Blinker blinker = Blinker::BOff;
  Blinker hazards = Blinker::BOff;
};

struct ProcessedIndicatorData {
  Indicator currentIndicator = Indicator::Off;
  Indicator continuousIndicator = Indicator::Off;
};

struct SpsDrawbarData {
  float distance = 0.0;
  bool sensorMovedToFarError = false;
  bool sensorSignalQualityLow = false;
  bool sensorOutOfRangeError = false;
};

struct VehicleData {
  TimeStamp stamp;
  float speed = 0.0;
  float steering = 0.0;
  SpsDrawbarData drawbarData{};
};

//   BO_ 0 errors_enables: 8 CP_102
//   SG_ speed_range_errors : 0|8@1+ (1,0) [0|0] "" Vector__XXX
//   SG_ steer_errors : 8|8@1+ (1,0) [0|0] "" Vector__XXX
//   SG_ move_errors : 16|8@1+ (1,0) [0|0] "" Vector__XXX
//   SG_ enables_validations : 24|8@1+ (1,0) [0|0] "" Vector__XXX
//   SG_ limit_switches : 32|8@1+ (1,0) [0|0] "" Vector__XXX

// Beispiel für Kombination der Fehler-Flags! Achte auf Konvertierung to real
// für ^2!
//   steer_errors:=
//   to_usint(to_real(sel_steerLimit2_error)*2**0 +
//   to_real(sel_steerLimit1_error)*2**1 + to_real(sel_steerLimit0_error)*2**2 +
//   to_real(limit_steerAngle2_error)*2**3 +
//   to_real(limit_steerAngle1_error)*2**4);

//   move_errors:=
//   to_usint(to_real(motion_forwardR_error)*2**0 +
//   to_real(motion_forwardL_error)*2**1 + to_real(motion_backwardR_error)*2**2
//   + to_real(motion_backwardL_error)*2**3);

//   speed_range_errors:=
//   to_usint(to_real(speedRange7_error)*2**0 + to_real(speedRange6_error)*2**1
//   + to_real(speedRange5_error)*2**2 + to_real(speedRange4_error)*2**3 +
//   to_real(speedRange3_error)*2**4
//   + to_real(speedRange2_error)*2**5 + to_real(speedRange1_error)*2**6);

//   limit_switches:=
//   to_usint(to_real(limit_stopF2)*2**0 + to_real(limit_stopF1)*2**1 +
//   to_real(limit_stopB2)*2**2 + to_real(limit_stopB1)*2**3 +
//   to_real(break_off_floor2)*2**4 + to_real(break_off_floor1)*2**5);

//   enables_validations:=
//   to_usint(to_real(follow_me)*2**0 + to_real(lifting_enable)*2**1 +
//   to_real(steering_valid)*2**2 + to_real(distance_valid)*2**3 +
//   to_real(leader_detected)*2**4 + to_real(pilotlinie)*2**5
//   + to_real(brake_released)*2**6 + to_real(drives_enable)*2**7);

typedef union {
  uint8_t data;
  struct {
    bool speedRange7_error : 1;
    bool speedRange6_error : 1;
    bool speedRange5_error : 1;
    bool speedRange4_error : 1;
    bool speedRange3_error : 1;
    bool speedRange2_error : 1;
    bool speedRange1_error : 1;
    bool NC8 : 1; // not used
  } flags;
} SpsSpeedRangeErrorData;

typedef union {
  uint8_t data;
  struct {
    bool sel_steerLimit2_error : 1;
    bool sel_steerLimit1_error : 1;
    bool sel_steerLimit0_error : 1;
    bool limit_steerAngle2_error : 1;
    bool limit_steerAngle1_error : 1;
    bool NC5 : 1; // not used
    bool NC6 : 1; // not used
    bool NC7 : 1; // not used
    bool NC8 : 1; // not used
  } flags;
} SpsSteerErrorData;

typedef union {
  uint8_t data;
  struct {
    bool motion_forwardR_error : 1;
    bool motion_forwardL_error : 1;
    bool motion_backwardR_error : 1;
    bool motion_backwardL_error : 1;
    bool standstill_detection_error : 1;
    bool NC6 : 1; // not used
    bool NC7 : 1; // not used
    bool NC8 : 1; // not used
  } flags;
} SpsMoveErrorData;

typedef union {
  uint8_t data;
  struct {
    bool follow_me : 1;
    bool external_emergency_stop : 1;
    bool steering_valid : 1;
    bool distance_valid : 1;
    bool lift_mechanism_left : 1;
    bool lift_mechanism_right : 1;
    bool emergency_brake_enabled : 1;
    bool drives_enable : 1;
  } flags;
} SpsEnableValidationData;

typedef union {
  uint8_t data;
  struct {
    bool limit_stopF2 : 1;
    bool limit_stopF1 : 1;
    bool limit_stopB2 : 1;
    bool limit_stopB1 : 1;
    bool break_off_floor2 : 1;
    bool break_off_floor1 : 1;
    bool bumper_left : 1;
    bool bumper_right : 1;
  } flags;
} SpsLimitSwitchesData;

struct SpsStateData {
  TimeStamp stamp;
  SpsSpeedRangeErrorData speedRangeErrors;
  SpsSteerErrorData steerErrors;
  SpsMoveErrorData moveErrors;
  SpsEnableValidationData enableValidations;
  SpsLimitSwitchesData limitSwitches;
};

struct ImuData {
  TimeStamp stamp;
  float gyrox = 0.0;
  float gyroy = 0.0;
  float gyroz = 0.0;
  float accx = 0.0;
  float accy = 0.0;
  float accz = 0.0;
};

struct DrawbarControllerData {
  TimeStamp stamp;
  bool valid = false;
  float processedDrawbarDistance = 0.0;
  float filteredDrawbarDistance = 0.0;
  float desiredAcceleration = 0.0;
};

struct DriverData {
  TimeStamp stamp;
  bool softEmergency = false;
  float desiredDriveTorqueLeft = 0.0;
  float desiredDriveTorqueRight = 0.0;
  float desiredBrakeTorqueLeft = 0.0;
  float desiredBrakeTorqueRight = 0.0;
};

struct DriveMotorInfo {
  float actualRpm = 0;
  float actualCurrent = 0.0;
  float actualCharge = 0.0;
  float actualPower = 0.0;
  float actualTemperature = 0.0;
  float actualSpeed = 0.0;
};

struct BrakeInfo {
  int actualBrakePositionLeft = 0;
  int actualBrakePositionRight = 0;
  float actualBrakeCurrentLeft = 0.0;
  float actualBrakeCurrentRight = 0.0;
  float actualBrakePressureLeft = 0.0;
  float actualBrakePressureRight = 0.0;
};

struct OrientationData {
  float x = 0.0;
  float y = 0.0;
  float z = 0.0;
  float w = 1.0;
  float roll = 0.0;
  float pitch = 0.0;
  float yaw = 0.0;
};

struct FusePack {
  FuseMapping fuse;
  Current current;
  bool state;
};

struct NotificationData {
  StateMapping state = StateMapping::S_UNDEFINED;
  ErrorMapping error = ErrorMapping::E_UNDEFINED;
};

using FuseStates = std::array<bool, FuseCount>;
using FuseCurrents = std::array<Current, FuseCount>;
struct FuseStateData {
  FuseStates states = {false};
  FuseCurrents currents{Current::mA1000};
  static uint16_t bitify(const FuseStateData &data, unsigned int offset,
                         unsigned int length) {
    uint16_t fuseStatesVal = 0;
    for (unsigned int i = 0; i < length; i++) {
      unsigned int fuseNumber = offset + i;
      fuseStatesVal |= data.states.at(fuseNumber) << i;
    }
    return fuseStatesVal;
  }

  static void set(FuseStateData &data, const FuseMapping &fuse, bool state,
                  Current current) {
    FuseStateData::setState(data, fuse, state);
    FuseStateData::setCurrent(data, fuse, current);
  }

  static void setState(FuseStateData &data, const FuseMapping &fuse,
                       bool state) {
    unsigned int fuseId = to_underlying(fuse);
    if (fuseId < data.states.size()) {
      data.states.at(fuseId) = state;
    }
  }
  static void setCurrent(FuseStateData &data, const FuseMapping &fuse,
                         Current current) {
    unsigned int fuseId = to_underlying(fuse);
    if (fuseId < data.currents.size()) {
      data.currents.at(fuseId) = current;
    }
  }
};

typedef union {
  uint8_t data;
  struct {
    bool front1 : 1;
    bool back1 : 1;
    bool front2 : 1;
    bool back2 : 1;
    bool front3 : 1;
    bool back3 : 1;
    bool front4 : 1;
    bool back4 : 1;
  } limits;
  static bool get(auto &data, DcMotorId id, DcMotorState direction) {
    if (id == DcMotorId::Motor1) {
      if (direction == DcMotorState::Forward) {
        return data.limits.front1;
      }
      if (direction == DcMotorState::Backward) {
        return data.limits.back1;
      }
    } else if (id == DcMotorId::Motor2) {
      if (direction == DcMotorState::Forward) {
        return data.limits.front2;
      }
      if (direction == DcMotorState::Backward) {
        return data.limits.back2;
      }
    } else if (id == DcMotorId::Motor3) {
      if (direction == DcMotorState::Forward) {
        return data.limits.front3;
      }
      if (direction == DcMotorState::Backward) {
        return data.limits.back3;
      }
    } else if (id == DcMotorId::Motor4) {
      if (direction == DcMotorState::Forward) {
        return data.limits.front4;
      }
      if (direction == DcMotorState::Backward) {
        return data.limits.back4;
      }
    }
    return false;
  }
} DcLimitSwitchesData;
/// Then use myvar.bdata to access the byte, or myvar.limits.front1 to access a
/// bit.

struct VehicleStateFlags {
  bool readyToDrive = false;
  bool emergencyTriggered = false;
  bool emergencySolved = false;
};

// constexpr std::size_t DcMotorCount = magic_enum::enum_count<DcMotorId>();
// using DcMotorStateList = std::array<DcMotorState, DcMotorCount>;

struct DcMotorStateData {
  DcMotorState motorState1;
  DcMotorState motorState2;
  DcMotorState motorState3;
  DcMotorState motorState4;

  static void set(DcMotorStateData &data, DcMotorId motor, DcMotorState state) {
    unsigned int id = static_cast<unsigned int>(motor);
    if (id == 0) {
      data.motorState1 = state;
    } else if (id == 1) {
      data.motorState2 = state;
    } else if (id == 2) {
      data.motorState3 = state;
    } else if (id == 3) {
      data.motorState4 = state;
    }
  }
};

using BatteryStateList = std::array<BatteryState, BatteryCount>;

enum class DrivingMode { Standstill, Forward, ForwardFast, Backward };