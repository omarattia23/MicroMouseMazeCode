#include <Arduino.h>

int encoderSensor(int PHOTOTRANSISTOR_PIN, int *counter, int desiredAngle)
{
    pinMode(PHOTOTRANSISTOR_PIN, INPUT);

    int sensorValue = digitalRead(PHOTOTRANSISTOR_PIN); // Read the sensor value
    int prevSensorValue;                                // Variable to store the previous sensor value
    /* Turn motor function */
    // Check if the sensor value has changed
    if (sensorValue != prevSensorValue)
    {
        counter++;
        int stop_count = (20 * desiredAngle) / 360;
        if (*counter == stop_count)
        {
            // turn motor off
        }
    }
    // pinMode(2, OUTPUT);
    // digitalWrite(2, HIGH);
    // delay(1000);
    // digitalWrite(2, LOW);
    // delay(1000);
    return 0;
}