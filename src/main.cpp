#include <Arduino.h>
#include "ultraSonic_interface.h"
#include "encoder_interface.h"

void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  // put your main code here, to run repeatedly:
  ultrasonic(1, 3);
  encoderSensor(4);
}