// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(1500);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000); 
  digitalWrite(13,1);
  delay(500);
  digitalWrite(13, 0);
  delay(1000);                     // wait for a second
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(125);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(125);                      // wait for a second
}
