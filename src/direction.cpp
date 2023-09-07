#include <Arduino.h>

#define IN1  4
#define IN2 32
#define IN3 18
#define IN4 19
#define En1 20
#define En2 21

void directionInit(void)
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(En1, OUTPUT);
  pinMode(En2, OUTPUT);

}

void backward(void)
{
 analogWrite(IN1, 255);
 analogWrite(IN2, 0);
 analogWrite(IN3, 255);
 analogWrite(IN4, 0);
}

void forward(void)
{
 analogWrite(IN1, 0);
 analogWrite(IN2, 170);
 analogWrite(IN3, 0);
 analogWrite(IN4, 170);
}

void right(void)
{
 analogWrite(IN1, 255);
 analogWrite(IN2, 0);
 analogWrite(IN3, 0);
 analogWrite(IN4, 255);
}
void left(void)
{
 analogWrite(IN1, 0);
 analogWrite(IN2, 255);
 analogWrite(IN3, 255);
 analogWrite(IN4, 0);
}

void stop(void)
{
 analogWrite(IN1, 0);
 analogWrite(IN2, 0);
 analogWrite(IN3, 0);
 analogWrite(IN4, 0);
}
void rotate180(void)
{
 analogWrite(IN1, 255);
 analogWrite(IN2, 0);
 analogWrite(IN3, 0);
 analogWrite(IN4, 255);
 delay(250);
}
