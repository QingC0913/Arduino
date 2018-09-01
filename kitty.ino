

void setup() {
  // put your setup code here, to run once:
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone
  pinMode(7, INPUT);                         // Set right whisker pin to input
  pinMode(5, INPUT);                         // Set left whisker pin to input  
  pinMode(13, OUTPUT);

  Serial.begin(9600);                        // Set data rate to 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(13, LOW);                                         
  byte wLeft = digitalRead(5);               // Copy left result to wLeft  
  byte wRight = digitalRead(7);              // Copy right result to wRight

  if (wLeft == 0 && wRight == 1){
    Serial.println("Left whisker is touched");                       // Display left whisker state 
  }
  if (wLeft == 1 && wRight == 0){
    Serial.println("Right whisker is touched");                    // Display right whisker state
  }
  if (wLeft == 0 && wRight == 0){
    Serial.println("Both whiskers are touched");
    digitalWrite(13, HIGH);
  }
  if (wLeft == 1 && wRight ==1){
    Serial.println("Neither whisker is touched");
  }
  delay(900);                                 // Pause for 100 ms
}
