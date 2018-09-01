#include <Servo.h>
Servo servoLeft;
Servo servoRight;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  servoLeft.attach(13);
  servoRight.attach(12);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void loop() {
  // put your main code here, to run repeatedly:
// Move wheels forward, then stop
  tone(5, 440, 1000000);
  digitalWrite(8, HIGH);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(1000);

  tone(5, 446, 1000000);
  digitalWrite(8, LOW);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(1000);

  tone(5, 494, 1000000);
  digitalWrite(8, HIGH);
  // Move wheels backward, then stop
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);

  tone(5, 554, 1000000);
  digitalWrite(8, LOW);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(1000);
}
