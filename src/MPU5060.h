#ifndef MPU6050_H
#define MPU6050_H

#include <Wire.h>
#include <MPU6050.h>

class MPU6050Wrapper {
public:
  MPU6050Wrapper();
  void initialize();
  void calibrate();
  void setFilterBandwidth();
  void setGyroRange();
  void readSensorDataAndCalculateAngles(float &pitch, float &roll, float &yaw);
};

#endif
