int LED_GREEN = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_GREEN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_GREEN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_GREEN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
