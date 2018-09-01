#include <Servo.h>                           // Include servo library
 
Servo servoRight;                            // Declare right servo
void setup() {
  // put your setup code here, to run once:
  servoRight.attach(12);                     // Attach right signal to pin 12
  servoRight.writeMicroseconds(1500);        // Calibrate the right servo
}

void loop() {
  // put your main code here, to run repeatedly:
 servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(3000);                               // ...for 3 seconds
 
  servoRight.writeMicroseconds(1500);        // Stay still
  delay(1000);                               // ...for 3 seconds

  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(3000);                               // ...for 3 seconds

  servoRight.writeMicroseconds(1500);        // Calibrate the right servo
}
