#include <Arduino.h>
#include "ultraSonic_interface.h"
#include "encoder_interface.h"
#include "direction_interface.h"

void setup()
{
   //put your setup code here, to run once:

  directionInit();

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(2, OUTPUT);

  Serial.begin(9600);




}

void loop()
{
  //put your main code here, to run repeatedly:
 int us_CENTER = ultrasonic(13,12);
 int us_LEFT = ultrasonic(15,2);
 int us_RIGHT = ultrasonic(14,27);

//  if (us_RIGHT> us_LEFT){
//   right();
//   delay(200);
//  }
//  else {
//   left();
//   delay(200);

//  }
  Serial.print("distance R");
 Serial.println(us_RIGHT);
 Serial.print("distance C");
 Serial.println(us_CENTER);
 Serial.print("distance L: ");
 Serial.println(us_LEFT);
delay(200);

  //  forward();
  //  delay(1000);
  //  stop();
  //  delay(500);
  //  backward();
  //  delay(1000);
  //  stop();
  //  delay(500);
  //  left();
  //  delay(1000);
  //  stop();
  //  delay(500);
  //  right();
  //  delay(1000);
  //  stop();
  //  delay(500);

   //encoderSensor(4);
}
