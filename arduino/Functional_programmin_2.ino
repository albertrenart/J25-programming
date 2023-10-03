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

void morseDot(){
  digitalWrite (LED_BUILTIN, 1);
delay (dotDuration);
digitalWrite (LED_BUILTIN, 0);
delay(dotDuration);
}

void morseDash(){
  digitalWrite (LED_BUILTIN, 1);
delay (dotDuration*3);
digitalWrite (LED_BUILTIN, 0);
delay(dotDuration);
}

void morseA () {
morseDot();
morseDash();
delay(dotDuration*2);
}

void morseL () {
morseDot();
morseDash();
morseDot();
morseDot();
delay(dotDuration*2);
}

void morseB () {
morseDash();
morseDot();
morseDot();
morseDot();
delay(dotDuration*2);  
}

void morseE (){
morseDot();
delay(dotDuration*2);
}

void morseR () {
morseDot();
morseDash();
morseDot();
delay(dotDuration*2);
}

void morseT () {
morseDash();
delay(dotDuration*2);
}