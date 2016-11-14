/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 2. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.
 */
int GreenPin = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(GreenPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(GreenPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(GreenPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
