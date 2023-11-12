//This program first sets the output.
//Then turns the LED on for one and a half seconds, then off for 1 second.
//Now it turns the LED on for one and a half seconds, then off for 1 second more.
//After this it starts a loop where the LED is turned on for 0.125 seconds and then off for 0.125 seconds repeatedly. T



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
