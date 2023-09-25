int dotDuration = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // A
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);

  // L
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);

  // B
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);  
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN,HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);

  // E
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);

  // R
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);  
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);

  // T
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*5);
  

}
