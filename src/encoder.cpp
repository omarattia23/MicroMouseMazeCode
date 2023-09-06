#include <Arduino.h>
#include "encoder_interface.h"

int encoderSensor(int PHOTOTRANSISTOR_PIN, int *encoderCounts, int desiredAngle)
{
    pinMode(PHOTOTRANSISTOR_PIN, INPUT);

    int sensorValue = digitalRead(PHOTOTRANSISTOR_PIN); // Read the sensor value
    int prevSensorValue = LOW;                          // Initialize to a known state
    /* Turn motor function */
    // Check if the sensor value has changed
    if (sensorValue != prevSensorValue)
    {
        encoderCounts++;
        int stop_count = (encoder_resolution * desiredAngle) / 360;
        if (*encoderCounts == stop_count)
        {
            // turn motor off
        }
    }
    prevSensorValue = sensorValue;
    // pinMode(2, OUTPUT);
    // digitalWrite(2, HIGH);
    // delay(1000);
    // digitalWrite(2, LOW);
    // delay(1000);
    return 0;
}
float calculateDistance(int *encoderCounts)
{
    float wheelCircumference = PI * WHEEL_DIAMETER;
    float distance = ((2 * (*encoderCounts) * wheelCircumference) / wheelCircumference);
    return distance;
}