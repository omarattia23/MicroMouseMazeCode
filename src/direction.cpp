int IN1,IN2,IN3,IN4,En1,En2;
#include <Arduino.h>

void forward(void)
{
 analogWrite(IN1, 255);
 analogWrite(IN2, 0);
 analogWrite(IN3, 255);
 analogWrite(IN4, 0);
}

void backward(void)
{
 analogWrite(IN1, 0);
 analogWrite(IN2, 255);
 analogWrite(IN3, 0);
 analogWrite(IN4, 255);
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
void rotate180(void)
{
 analogWrite(IN1, 255);
 analogWrite(IN2, 0);
 analogWrite(IN3, 0);
 analogWrite(IN4, 255);
 delay(250);
}
