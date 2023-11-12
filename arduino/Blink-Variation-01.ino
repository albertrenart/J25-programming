//This program first determines the output.
//It turns on the LED for two seconds and it turns it off for 1 second more.
//After this, the LED will be blinking forever (half a second on, half a second off)

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
}
