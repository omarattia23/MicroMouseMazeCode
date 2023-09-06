#ifndef encoder_interface_h
#define encoder_interface_h

#define encoder_resolution      20
#define WHEEL_DIAMETER          2.5

int encoderSensor(int PHOTOTRANSISTOR_PIN, int *encoderCounts, int desiredAngle);
float calculateDistance(int *encoderCounts);

#endif