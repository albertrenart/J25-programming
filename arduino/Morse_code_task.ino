//This program first sets the output. It is designed to flash my name in morse code in the builtin LED of the arduino. The Morse code for each letter is represented by a sequence of dots (short flashes) and dashes (long flashes).




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
