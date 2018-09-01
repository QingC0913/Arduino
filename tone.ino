#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left servo signal
Servo servoRight;                            // Declare right servo signal

int PIEZOPIN = 5;                            // Declare pin that the piezo is connected to.
// DECLARE LED PINS HERE
// One octave of notes between A4 and A5, for Piezo Greeting
int note_A4 = 440;
int note_As4 = 466; int note_Bb4 = note_As4;
int note_B4 = 494;
int note_C5 = 523;
int note_Cs5 = 554; int note_Db5 = note_Cs5;
int note_D5 = 587;
int note_Ds5 = 622; int note_Eb5 = note_Ds5;
int note_E5 = 659;
int note_F5 = 698;
int note_Fs5 = 740; int note_Gb5 = note_Fs5;
int note_G5 = 784;
int note_Gs5 = 830; int note_Ab5 = note_Gs5;

void setup() {
  // put your setup code here, to run once:
   pinMode(PIEZOPIN, OUTPUT);                 // Attach piezo to pin 5. 
  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
  servoLeft.writeMicroseconds(1500000);        // Calibrate left servo
  servoRight.writeMicroseconds(1500000);       // Calibrate right servo
  // Attach LED pins here.
}

void loop() {
  // put your main code here, to run repeatedly:
  // Code for testing servos. 
  // Tinker with the numbers to see how they work!
  // For help, visit https://learn.parallax.com/tutorials/robot/shield-bot/robotics-board-education-shield-arduino/chapter-2-shield-lights-servo-4. 
// tone(5, 440, 1000000);
 //tone(5, 446, 1000000);
// tone(5, 494, 1000000);
// tone(5, 554, 1000000);
// tone(5, 587, 1000000);
// tone(5, 622, 1000000);
// tone(5, 659, 1000000);

  servoLeft.writeMicroseconds(500);        
  servoRight.writeMicroseconds(500);
  delay(500);
}
