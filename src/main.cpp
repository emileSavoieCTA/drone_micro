#include <Arduino.h>
#include <Servo.h>

Servo servo1;

int servoPin = 2;

void setup()
{
  servo1.attach(servoPin);
}

void loop()
{
  servo1.write(0);
}

















