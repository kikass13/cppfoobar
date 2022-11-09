#pragma once

#include <chrono>

#include "main.hpp"

// using namespace type_info;

/// ##################################################################################################
using TimeStamp = std::chrono::time_point<std::chrono::system_clock,
                                          std::chrono::microseconds>;
enum class Blinker : uint8_t { BOff };
enum class Indicator : uint8_t { Off };
enum class FuseMapping : uint8_t {};
enum class Current : uint8_t { mA1000 };
enum class StateMapping : uint8_t { S_UNDEFINED };
enum class ErrorMapping : uint8_t { E_UNDEFINED };
enum class DcMotorState : uint8_t { Off, Forward, Backward };
enum class DcMotorId : uint8_t { Motor1, Motor2, Motor3, Motor4 };
static constexpr std::size_t FuseCount = 30;
static constexpr std::size_t BatteryCount = 4;
struct BatteryState {
  float voltage;
  float current;
  float charge;
};
struct FuseState {
  uint8_t offset;
  uint8_t length;
  uint16_t fuseStates;
};

struct BatteryDoorInfo {
  bool leftHatchClosed;
  bool rightHatchClosed;
  bool backDoorClosed;
};

enum class BatteryLockState : uint8_t { CLOSED = 0, OPEN = 1, UNKNOWN = 255 };

/// ##################################################################################################

struct TimeStampWrapper : DefaultObjectWrapper<TimeStamp>, TimeStamp {};


#pragma pack(push, 1)
struct IndicatorData : Object<"IndicatorData", Attribute<"blinker", Blinker>,
                              Attribute<"hazards", Blinker>> {
  Blinker blinker = Blinker::BOff;
  Blinker hazards = Blinker::BOff;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct ProcessedIndicatorData
    : Object<"ProcessedIndicatorData", Attribute<"currentIndicator", Indicator>,
             Attribute<"continuousIndicator", Indicator>> {
  Indicator currentIndicator = Indicator::Off;
  Indicator continuousIndicator = Indicator::Off;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct SpsDrawbarData : Object<"SpsDrawbarData", Attribute<"distance", float>,
                               Attribute<"sensorMovedToFarError", bool>,
                               Attribute<"sensorSignalQualityLow", bool>,
                               Attribute<"sensorOutOfRangeError", bool>> {
  float distance = 0.0;
  bool sensorMovedToFarError = false;
  bool sensorSignalQualityLow = false;
  bool sensorOutOfRangeError = false;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct VehicleData
    : Object<"VehicleData", Attribute<"stamp", TimeStamp>,
             Attribute<"speed", float>, Attribute<"steering", float>,
             Attribute<"drawbarData", SpsDrawbarData>> {
  TimeStampWrapper stamp;
  float speed = 0.0;
  float steering = 0.0;
  SpsDrawbarData drawbarData{};
};
#pragma pack(pop)

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

#pragma pack(push, 1)
typedef union {
  uint8_t data;
  struct Flags : Object<"Flags", Attribute<"value", uint8_t>> {
    bool speedRange7_error : 1;
    bool speedRange6_error : 1;
    bool speedRange5_error : 1;
    bool speedRange4_error : 1;
    bool speedRange3_error : 1;
    bool speedRange2_error : 1;
    bool speedRange1_error : 1;
    bool NC8 : 1; // not used
  };
} SpsSpeedRangeErrorData;
#pragma pack(pop)

#pragma pack(push, 1)
typedef union {
  uint8_t data;
  struct Flags : Object<"Flags", Attribute<"value", uint8_t>> {
    bool sel_steerLimit2_error : 1;
    bool sel_steerLimit1_error : 1;
    bool sel_steerLimit0_error : 1;
    bool limit_steerAngle2_error : 1;
    bool limit_steerAngle1_error : 1;
    bool NC6 : 1; // not used
    bool NC7 : 1; // not used
    bool NC8 : 1; // not used
  };
} SpsSteerErrorData;
#pragma pack(pop)

#pragma pack(push, 1)
typedef union {
  uint8_t data;
  struct Flags : Object<"Flags", Attribute<"value", uint8_t>> {
    bool motion_forwardR_error : 1;
    bool motion_forwardL_error : 1;
    bool motion_backwardR_error : 1;
    bool motion_backwardL_error : 1;
    bool standstill_detection_error : 1;
    bool NC6 : 1; // not used
    bool NC7 : 1; // not used
    bool NC8 : 1; // not used
  };
} SpsMoveErrorData;
#pragma pack(pop)

#pragma pack(push, 1)
typedef union {
  uint8_t data;
  struct Flags : Object<"Flags", Attribute<"value", uint8_t>> {
    bool follow_me : 1;
    bool external_emergency_stop : 1;
    bool steering_valid : 1;
    bool distance_valid : 1;
    bool lift_mechanism_left : 1;
    bool lift_mechanism_right : 1;
    bool emergency_brake_enabled : 1;
    bool drives_enable : 1;
  };
} SpsEnableValidationData;
#pragma pack(pop)

#pragma pack(push, 1)
typedef union {
  uint8_t data;
  struct Flags : Object<"Flags", Attribute<"flags", uint8_t>> {
    bool limit_stopF2 : 1;
    bool limit_stopF1 : 1;
    bool limit_stopB2 : 1;
    bool limit_stopB1 : 1;
    bool break_off_floor2 : 1;
    bool break_off_floor1 : 1;
    bool bumper_left : 1;
    bool bumper_right : 1;
  };
} SpsLimitSwitchesData;
#pragma pack(pop)

#pragma pack(push, 1)
struct SpsStateData
    : Object<
          "SpsStateData", Attribute<"stamp", TimeStampWrapper>,
          Attribute<"SpsSpeedRangeErrorFlags", SpsSpeedRangeErrorData::Flags>,
          Attribute<"SpsSteerErrorFlags", SpsSteerErrorData::Flags>,
          Attribute<"SpsMoveErrorFlags", SpsMoveErrorData::Flags>,
          Attribute<"SpsEnableValidationFlags", SpsEnableValidationData::Flags>,
          Attribute<"SpsLimitSwitches", SpsLimitSwitchesData::Flags>> {
  TimeStampWrapper stamp;
  SpsSpeedRangeErrorData speedRangeErrors;
  SpsSteerErrorData steerErrors;
  SpsMoveErrorData moveErrors;
  SpsEnableValidationData enableValidations;
  SpsLimitSwitchesData limitSwitches;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct ImuData : Object<"ImuData", Attribute<"stamp", TimeStampWrapper>,
                        Attribute<"gyrox", float>, Attribute<"gyroy", float>,
                        Attribute<"gyroz", float>, Attribute<"accx", float>,
                        Attribute<"accy", float>, Attribute<"accz", float>> {
  TimeStampWrapper stamp;
  float gyrox = 0.0;
  float gyroy = 0.0;
  float gyroz = 0.0;
  float accx = 0.0;
  float accy = 0.0;
  float accz = 0.0;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct DrawbarControllerData
    : Object<"DrawbarControllerData", Attribute<"stamp", TimeStampWrapper>,
             Attribute<"valid", bool>,
             Attribute<"processedDrawbarDistance", float>,
             Attribute<"filteredDrawbarDistance", float>,
             Attribute<"desiredAcceleration", float>> {
  TimeStampWrapper stamp;
  bool valid = false;
  float processedDrawbarDistance = 0.0;
  float filteredDrawbarDistance = 0.0;
  float desiredAcceleration = 0.0;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct DriverData : Object<"DriverData", Attribute<"stamp", TimeStampWrapper>,
                           Attribute<"softEmergency", bool>,
                           Attribute<"desiredDriveTorqueLeft", float>,
                           Attribute<"desiredDriveTorqueRight", float>,
                           Attribute<"desiredBrakeTorqueLeft", float>,
                           Attribute<"desiredBrakeTorqueRight", float>> {
  TimeStampWrapper stamp;
  bool softEmergency = false;
  float desiredDriveTorqueLeft = 0.0;
  float desiredDriveTorqueRight = 0.0;
  float desiredBrakeTorqueLeft = 0.0;
  float desiredBrakeTorqueRight = 0.0;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct DriveMotorInfo
    : Object<"DriveMotorInfo", Attribute<"actualRpm", float>,
             Attribute<"actualCurrent", float>,
             Attribute<"actualCharge", float>, Attribute<"actualPower", float>,
             Attribute<"actualTemperature", float>,
             Attribute<"actualSpeed", float>> {
  float actualRpm = 0;
  float actualCurrent = 0.0;
  float actualCharge = 0.0;
  float actualPower = 0.0;
  float actualTemperature = 0.0;
  float actualSpeed = 0.0;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct BrakeInfo
    : Object<"BrakeInfo", Attribute<"actualBrakePositionLeft", int>,
             Attribute<"actualBrakePositionRight", int>,
             Attribute<"actualBrakeCurrentLeft", float>,
             Attribute<"actualBrakeCurrentRight", float>,
             Attribute<"actualBrakePressureLeft", float>,
             Attribute<"actualBrakePressureRight", float>> {
  int actualBrakePositionLeft = 0;
  int actualBrakePositionRight = 0;
  float actualBrakeCurrentLeft = 0.0;
  float actualBrakeCurrentRight = 0.0;
  float actualBrakePressureLeft = 0.0;
  float actualBrakePressureRight = 0.0;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct OrientationData
    : Object<"OrientationData", Attribute<"x", float>, Attribute<"y", float>,
             Attribute<"z", float>, Attribute<"w", float>,
             Attribute<"roll", float>, Attribute<"pitch", float>,
             Attribute<"yaw", float>> {
  float x = 0.0;
  float y = 0.0;
  float z = 0.0;
  float w = 1.0;
  float roll = 0.0;
  float pitch = 0.0;
  float yaw = 0.0;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct FusePack
    : Object<"FusePack", Attribute<"fuse", FuseMapping>,
             Attribute<"current", Current>, Attribute<"state", bool>> {
  FuseMapping fuse;
  Current current;
  bool state;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct NotificationData
    : Object<"NotificationData", Attribute<"state", StateMapping>,
             Attribute<"error", ErrorMapping>> {
  StateMapping state = StateMapping::S_UNDEFINED;
  ErrorMapping error = ErrorMapping::E_UNDEFINED;
};
#pragma pack(pop)

// static constexpr std::size_t FuseCount =
// magic_enum::enum_count<FuseMapping>();
using FuseStates = std::array<bool, FuseCount>;
using FuseCurrents = std::array<Current, FuseCount>;

#pragma pack(push, 1)
struct FuseStateData : Object<"FuseStateData", Attribute<"states", FuseStates>,
                              Attribute<"currents", FuseCurrents>> {
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

  static void update(FuseStateData &data, const FuseState &setStateObj) {
    for (unsigned int i = 0; i < setStateObj.length; i++) {
      unsigned int fuseNumber = setStateObj.offset + i;
      bool state = static_cast<bool>((setStateObj.fuseStates >> i) & 1);
      // DUCK_LOG_INFO(fuseNumber, " = ", state);
      data.states.at(fuseNumber) = state;
    }
  }
};
#pragma pack(pop)

#pragma pack(push, 1)
typedef union {
  uint8_t data;
  struct Limits : Object<"LimitSwitches", Attribute<"value", uint8_t>> {
    bool front1 : 1;
    bool back1 : 1;
    bool front2 : 1;
    bool back2 : 1;
    bool front3 : 1;
    bool back3 : 1;
    bool front4 : 1;
    bool back4 : 1;
  };
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
#pragma pack(pop)

/// Then use myvar.bdata to access the byte, or myvar.limits.front1 to access a
/// bit.

#pragma pack(push, 1)
struct VehicleStateFlags
    : Object<"VehicleStateFlags", Attribute<"readyToDrive", bool>,
             Attribute<"emergencyTriggered", bool>,
             Attribute<"emergencySolved", bool>> {
  bool readyToDrive = false;
  bool emergencyTriggered = false;
  bool emergencySolved = false;
};
#pragma pack(pop)

// constexpr std::size_t DcMotorCount = magic_enum::enum_count<DcMotorId>();
// using DcMotorStateList = std::array<DcMotorState, DcMotorCount>;

#pragma pack(push, 1)
struct DcMotorStateData
    : Object<"DcMotorStateData", Attribute<"motorState1", DcMotorState>,
             Attribute<"motorState2", DcMotorState>,
             Attribute<"motorState3", DcMotorState>,
             Attribute<"motorState4", DcMotorState>> {
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
#pragma pack(pop)

#pragma pack(push, 1)
struct BatteryStateWrapper
    : BatteryState,
      Object<"BatteryState", Attribute<"voltage", float>,
             Attribute<"current", float>, Attribute<"charge", float>> {};
#pragma pack(pop)

#pragma pack(push, 1)
struct BatteryDoorInfoWrapper
    : BatteryDoorInfo,
      Object<"BatteryDoorInfo", Attribute<"leftHatchClosed", bool>,
             Attribute<"rightHatchClosed", bool>,
             Attribute<"backDoorClosed", bool>> {};
#pragma pack(pop)

#pragma pack(push, 1)
struct BatteryStates
    : Object<"BatteryStates", Attribute<"states", std::array<BatteryState, BatteryCount>>> {
  std::array<BatteryStateWrapper, BatteryCount> states;
};
#pragma pack(pop)

enum class DrivingMode { Standstill, Forward, ForwardFast, Backward };

// namespace types {
// using AllTypes =
//     std::tuple<IndicatorData, ProcessedIndicatorData, SpsDrawbarData,
//                VehicleData, SpsStateData, ImuData, DrawbarControllerData,
//                DriverData, DriveMotorInfo, BrakeInfo, OrientationData, FusePack,
//                NotificationData, FuseStateData, DcLimitSwitchesData::Limits,
//                VehicleStateFlags, DcMotorStateData, BatteryStates>;
// }
