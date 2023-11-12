//This program shows my name (albert) in morse code in the builtin LED of the arduino.
//Instead, of using a function for the dot and a function for the dash like in 'functional programming 2', here I have used the morseBlink function which is used to control the blinking of the LED based on the number of dots specified for each letter.
//The dotDuration variable controls the duration of a single dot.
//The loop is the same as in 'functional programming 2', and each of the functions representing letters are more or less the same, but using the morseBlink funciton.




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
