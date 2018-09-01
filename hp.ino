#include <Servo.h>
Servo servoLeft;
Servo servoRight;

struct MusicStruct {
  int A = 550;
  int As = 582;
  int B = 617;
  int C = 654;
  int Cs = 693;
  int D = 734;
  int Ds = 777;
  int E = 824;
  int F = 873;
  int Fs = 925;
  int G = 980;
  int Gs = 1003;
  int A2 = 1100;
  int A2s = 1165;
  int B2 = 1234;
  int C3 = 1308;
  int C3s = 1385;
  int D3 = 1555;
}Music;

struct LengthStruct {
  float half = 0.5;
  float one = 1.0;
  float one_half = 1.5;
  float two = 2.0;
  float two_half = 2.5;
}Length;

int tempo = 400;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); 
  pinMode(5, OUTPUT);
  servoLeft.attach(13);
  servoRight.attach(12);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void setTone(int pin, int note, int duration) {
  tone(pin, note, duration);
  delay(duration);
  noTone(pin);
}

void song(){
  setTone(5, Music.B, tempo * Length.one);
  setTone(5, Music.E, tempo * Length.one_half);
  setTone(5, Music.G, tempo * Length.half);
  setTone(5, Music.F, tempo * Length.one);
  setTone(5, Music.E, tempo * Length.two);
  setTone(5, Music.B2, tempo * Length.one);
  setTone(5, Music.A2, tempo * Length.two_half);
  setTone(5, Music.Fs, tempo * Length.two_half);
  
  setTone(5, Music.E, tempo * Length.one_half);
  setTone(5, Music.G, tempo * Length.half);
  setTone(5, Music.F, tempo * Length.one);
  setTone(5, Music.Ds, tempo * Length.two);
  setTone(5, Music.F, tempo * Length.one);
  setTone(5, Music.B, tempo * Length.two_half);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
// Move wheels forward, then stop

  song();
  digitalWrite(8, HIGH);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(700);

  digitalWrite(8, LOW);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(700);

  song();
  digitalWrite(8, HIGH);
  // Move wheels backward, then stop
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(700);

  digitalWrite(8, LOW);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(700);
}
