#include "Arduino.h"
#include "MPU6050.h"

MPU6050Wrapper::MPU6050Wrapper() {}

void MPU6050Wrapper::initialize()
{
  Wire.begin();
  mpu.initialize();
}

void MPU6050Wrapper::calibrate()
{
  // Calibrate the MPU6050 (optional)
  // mpu.calibrateGyro();
  // mpu.calibrateAccel();
}

void MPU6050Wrapper::setFilterBandwidth()
{
  mpu.setDLPFMode(6); // Set Digital Low-Pass Filter (DLPF) bandwidth to 5Hz
}

void MPU6050Wrapper::setGyroRange()
{
  mpu.setFullScaleGyroRange(0x00); // Set gyroscope range to +/- 250 degrees per second
}

void MPU6050Wrapper::readSensorDataAndCalculateAngles(float &pitch, float &roll, float &yaw)
{
  int16_t ax, ay, az, gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  pitch = atan2(ax, sqrt(ay * ay + az * az)) * 180.0 / M_PI;
  roll = atan2(-ay, az) * 180.0 / M_PI;
  yaw = atan2(gy, sqrt(gx * gx + gz * gz)) * 180.0 / M_PI;
}
