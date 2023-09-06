#include <Arduino.h>
int encoderSensor(int PHOTOTRANSISTOR_PIN)
{
    pinMode(PHOTOTRANSISTOR_PIN, INPUT);

    int sensorValue = digitalRead(PHOTOTRANSISTOR_PIN); // Read the sensor value
    int prevSensorValue;                                // Variable to store the previous sensor value

    // Check if the sensor value has changed
    if (sensorValue != prevSensorValue)
    {
        if (sensorValue == LOW)
        {
            Serial.println("Encoder slot detected!"); // A slot on the encoder disk is detected
        }
        else
        {
            Serial.println("Encoder slot blocked!"); // The slot is blocked or not detected
        }
        prevSensorValue = sensorValue; // Update the previous sensor value
        return 0;
    }
    // pinMode(2, OUTPUT);
    // digitalWrite(2, HIGH);
    // delay(1000);
    // digitalWrite(2, LOW);
    // delay(1000);
    return 0;
}