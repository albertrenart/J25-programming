//This program blinks my name (albert) in morse code in the arduino LED.
//The program first sets the output.
//In the loop we have only the functions represening each letter, and a final delay, because in morse code there has to be a separation between words.
//Inside each funtion representing a letter, there is a combination of dots and dashes representing that letter in morse code.
//To define what is a dot and what is a dash, there are two separate functions, which work with different delays dependig of what they represent.


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
