int dotDuration = 500;

void setup() {
  // put your setup code here, to run once:
pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
morseA ();
morseL ();
morseB ();
morseE ();
morseR ();
morseT ();
delay (dotDuration*4);
}

void morseBlink (int numbeOfDots) {
digitalWrite (LED_BUILTIN, 1);
delay(dotDuration*numbeOfDots);
digitalWrite (LED_BUILTIN, 0);
delay(dotDuration);
}

void morseA () {
morseBlink (1);
morseBlink (3);
delay(dotDuration*2);
}

void morseL () {
morseBlink (1);
morseBlink (3);
morseBlink (1);
morseBlink (1);
delay(dotDuration*2);
}

void morseB () {
morseBlink (3);
morseBlink (1);
morseBlink (1);
morseBlink (1);
delay(dotDuration*2);  
}

void morseE (){
morseBlink (1);
delay(dotDuration*2);
}

void morseR () {
morseBlink (1);
morseBlink (3);
morseBlink (1);
delay(dotDuration*2);
}

void morseT () {
morseBlink (3);
delay(dotDuration*2);
}