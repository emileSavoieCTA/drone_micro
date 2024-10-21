#include <Arduino.h>
#include <Servo.h>

#define PIN_SERVO1 5
#define PIN_SERVO2 10

Servo servo1;
Servo servo2;

void setup()
{
  Serial.begin(9600);
  Serial.println("Arduino Ready");

  servo1.attach(PIN_SERVO1);
  servo2.attach(PIN_SERVO2);

  // servo1.write(HOME_SERVO_1);
  // servo2.write(HOME_SERVO_2);
  servo1.write(0);
  servo2.write(0);
}

void loop()
{

  // RECEIVE DATA
  if (Serial.available() > 0)
  {
    String receivedData = Serial.readStringUntil('\n');
    Serial.println("msg received");

    if (receivedData == "Landed")
    {
      Serial.println("Landed received");
      servo1.write(100);
      servo2.write(100);
      Serial.println("servo moved");
    }
  }

}
