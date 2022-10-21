#include "main.hpp"
#include <assert.h>
#include <cstring>
#include <iostream>

#include "Types.hpp"

using AllTestAttributesT = std::tuple<Human, Developer, Xaxa>;
static auto typeBufferTest = createTypeString<AllTestAttributesT, 1000>();

static auto typeBufferTypes = createTypeString<types::AllTypes, 5000>();

int main() {
  Human h{.age = 10, .name = {'1', '2', '3'}, .r = R::NONE};

  std::cout << typeBufferTest.get() << std::endl;
  std::cout << "_________________________________________" << std::endl;
  std::cout << typeBufferTypes.get() << std::endl;
  std::cout << "_________________________________________" << std::endl;
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