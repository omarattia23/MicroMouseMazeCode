#include <Arduino.h>

int ultrasonic(int trigPin, int echoPin) {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    long duration;
    int distance;
    // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 microseconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
    // Calculating the distance
    distance = duration * 0.034 / 2;

    // Print the distance on the Serial Monitor (assuming Serial is initialized in setup())
    Serial.print("Distance: ");
    Serial.println(distance);

    // pinMode(2, OUTPUT);
    // digitalWrite(2, HIGH);
    // delay(3000);
    // digitalWrite(2, LOW);
    // delay(3000);
    return distance; // Return the distance value
}
