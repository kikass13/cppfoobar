#include <assert.h>
#include <cstring>
#include <iostream>

#include "IoList.hpp"
#include "main.hpp"

// #include "Types.hpp"

static constexpr uint16_t crc16gsm(const char *data, size_t length,
                                   size_t offset = 0) {
  constexpr uint16_t xorout = 0xFFFF;
  uint16_t crc = 0x0000;
  for (size_t i = offset; i < length; i++) {
    auto t = (crc >> 8) ^ data[i];
    t = (t ^ t >> 4);
    crc = (crc << 8) ^ (t << 12) ^ (t << 5) ^ (t);
    crc &= 0xFFFF;
  }
  return crc ^ xorout;
}

/// from:
/// https://stackoverflow.com/questions/6357031/how-do-you-convert-a-byte-array-to-a-hexadecimal-string-in-c/17147874#17147874
static constexpr void btox(char *xp, const char *bb, int n) {
  const char xx[] = "0123456789ABCDEF";
  while (--n >= 0)
    xp[n] = xx[(bb[n >> 1] >> ((1 - (n & 1)) << 2)) & 0xF];
}

using AllTestAttributesT = std::tuple<Human, Developer, Xaxa>;
static constexpr auto typeBufferTest =
    createTypeString<AllTestAttributesT, 1000>();
// static constexpr auto typeBufferTypes =
//     createTypeString<types::AllTypes, 5000>();

using MyMessageDict1 =
    IOList<IO<Sub, "OTHER_NAME_FOR_SUB">,
           IO<Sub2, "OTHER_NAME_FOR_SUB2", ObjectReadWrite>,
           IO<UNKNOWN, "UNKNOWN_OVEWRITE">, IO<UNKNOWN, "BBBBB">,
           IO<B, "bbbb", ObjectReadWrite>, IO<Flags, "flags">,
           IO<Sub, "END", ObjectReadWrite>>;
static MyMessageDict1 ios;

// using MyNodeIoMessagingDict = IOList<
//     IO<IndicatorData, "BEGIN">, IO<IndicatorData, "externalIndicators">,
//     IO<ProcessedIndicatorData, "processedIndicators">,
//     IO<FuseStateData, "fuseStatesOut">, IO<FuseStateData, "fuseStatesIn">,
//     IO<VehicleData, "vehicleData">, IO<bool, "externalVehicleDataActive">,
//     IO<VehicleData, "externalVehicleData">, IO<SpsStateData, "spsStateData">,
//     IO<ImuData, "processedImuData">, IO<OrientationData, "orientationData">,
//     IO<DrawbarControllerData, "drawbarControllerData">,
//     IO<bool, "externalTorqueCommandActive">, IO<float,
//     "externalDriveTorque">, IO<int, "externalBrakePosition">, IO<DriverData,
//     "driverData">, IO<DriveMotorInfo, "driveMotorInfoLeft">,
//     IO<DriveMotorInfo, "driveMotorInfoRight">, IO<IndicatorData, "MID1">,
//     IO<bool, "externalVehicleStateFlagsEnable">,
//     IO<VehicleStateFlags, "externalVehicleStateFlags">,
//     IO<VehicleStateFlags, "vehicleStateFlags">, IO<DrivingMode,
//     "drivingMode">, IO<NotificationData, "notifications">, IO<bool,
//     "externalDcMotorEnable">, IO<DcMotorStateData, "dcMotorStates">,
//     IO<IndicatorData, "MID2">, IO<DcMotorStateData, "externalDcMotorStates">,
//     IO<DcLimitSwitchesData, "externalLimitSwitches">,
//     IO<DcLimitSwitchesData, "limitSwitches">, IO<BrakeInfo, "brakeInfo">,
//     IO<BatteryStates, "batteryChargeStates">, IO<bool, "batteryLockEnable">,
//     IO<BatteryLockState, "batteryLockState">,
//     IO<BatteryDoorInfoWrapper, "batteryDoorInfo">,
//     IO<bool, "elmoPcbProxyEnabled">, IO<IndicatorData, "END">>;

// static MyNodeIoMessagingDict ios2;

char packedData[ios.size()] = {};
static constexpr size_t SIZE = ios.size() * 2;
char bufferToChar[SIZE + 1] = {};
char *bufferToCharPtr = (char *)((long unsigned int)(bufferToChar));

// char packedData2[ios2.size()] = {};
// static constexpr size_t SIZE2 = ios2.size() * 2;
// char bufferToChar2[SIZE2 + 1] = {};
// char *bufferToCharPtr2 = (char *)((long unsigned int)(bufferToChar2));

int main() {
  Human h{.age = 10, .name = {'1', '2', '3'}, .r = R::NONE};

  // IndicatorData id;
  // id.blinker = static_cast<Blinker>(0xff);
  // id.hazards = static_cast<Blinker>(0xaa);
  // ios2.set<"BEGIN">(id);
  // ios2.set<"MID1">(id);
  // ios2.set<"MID2">(id);
  // ios2.set<"END">(id);
  auto crc1 = crc16gsm(MyMessageDict1::getTypeString(),
                       MyMessageDict1::getTypeStringSize());
  std::cout << typeBufferTest.get() << std::endl;
  std::cout << "_________________________________________" << std::endl;
  std::cout << std::hex << crc1 << std::dec << MyMessageDict1::getTypeString()
            << std::endl; /// C: works
  std::cout << "RESULT SIZE: " << sizeof(ios) << std::endl;
  std::cout << "_________________________________________" << std::endl;
  // std::cout << MyNodeIoMessagingDict::getTypeString() << std::endl;
  std::cout << "_________________________________________" << std::endl;
  // ios2.printContents();
  // std::cout << "_________________________________________" << std::endl;

  std::cout << "1 RESULT SIZE: " << ios.size() << std::endl;
  std::cout << "1 CHAR BUF SIZE: " << SIZE + 1 << std::endl;
  ios.pack(packedData);
  btox(bufferToCharPtr, packedData, SIZE); /// faster
  bufferToCharPtr[SIZE] = '\0';
  std::cout << "_________________________________________" << std::endl;
  std::cout << bufferToCharPtr << std::endl;
  std::cout << "_________________________________________" << std::endl;
  char receiveBuf[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                          58,5,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  ios.unpack(receiveBuf);
  std::cout << "bbbbb: 1337 <-> " << ios.external<"bbbb">().a.v << std::endl;

  /*
  std::cout << "_________________________________________" << std::endl;
  std::cout << "2 RESULT SIZE: " << ios2.size() << std::endl;
  std::cout << "2 CHAR BUF SIZE: " << SIZE2 + 1 << std::endl;
  ios2.pack(packedData2);
  btox(bufferToCharPtr2, packedData2, SIZE2); /// faster
  bufferToCharPtr2[SIZE2] = '\0';
  std::cout << "_________________________________________" << std::endl;
  std::cout << bufferToCharPtr2 << std::endl;
  std::cout << "_________________________________________" << std::endl;
  */
}

/*
{ {IndicatorData blinker:1:B hazards:1:B }  {ProcessedIndicatorData
currentIndicator:1:B continuousIndicator:1:B }  {SpsDrawbarData distance:4:f
sensorMovedToFarError:1:B sensorSignalQualityLow:1:B sensorOutOfRangeError:1:B }
{VehicleData stamp:8:* speed:4:f steering:4:f drawbarData:8:* }  {SpsStateData
stamp:8:* SpsSpeedRangeErrorFlags:1:* SpsSteerErrorFlags:1:*
SpsMoveErrorFlags:1:* SpsEnableValidationFlags:1:* SpsLimitSwitches:1:* }
{ImuData stamp:8:* gyrox:4:f gyroy:4:f gyroz:4:f accx:4:f accy:4:f accz:4:f }
{DrawbarControllerData stamp:8:* valid:1:B processedDrawbarDistance:4:f
filteredDrawbarDistance:4:f desiredAcceleration:4:f }  {DriverData stamp:8:*
softEmergency:1:B desiredDriveTorqueLeft:4:f desiredDriveTorqueRight:4:f
desiredBrakeTorqueLeft:4:f desiredBrakeTorqueRight:4:f }  {DriveMotorInfo
actualRpm:4:f actualCurrent:4:f actualCharge:4:f actualPower:4:f
actualTemperature:4:f actualSpeed:4:f }  {BrakeInfo actualBrakePositionLeft:4:i
actualBrakePositionRight:4:i actualBrakeCurrentLeft:4:f
actualBrakeCurrentRight:4:f actualBrakePressureLeft:4:f
actualBrakePressureRight:4:f }  {OrientationData x:4:f y:4:f z:4:f w:4:f
roll:4:f pitch:4:f yaw:4:f }  {FusePack fuse:1:B current:1:B state:1:B }
{NotificationData state:1:B error:1:B }  {FuseStateData states:30:A/30,B
currents:30:A/30,B }  {LimitSwitches value:1:B }  {VehicleStateFlags
readyToDrive:1:B emergencyTriggered:1:B emergencySolved:1:B }  {DcMotorStateData
motorState1:1:B motorState2:1:B motorState3:1:B motorState4:1:B }  {BatteryState
voltage:4:f current:4:f charge:4:f } }
*/