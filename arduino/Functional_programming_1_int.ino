//This program displays my name (Albert) in Morse code in the built-in LED of the Arduino.
//This code is based on two functions: morseDot and morseDash.
//First this program sets the output, then it goes to the loop, where I have placed the functions in the correct order, which represents my name in Morse code.


int dotDuration = 500;

void setup() {
  // put your setup code here, to run once:
pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//A  
morseDot();
morseDash();
delay(dotDuration*2);
//L
morseDot();
morseDash();
morseDot();
morseDot();
delay(dotDuration*2);
//B
morseDash();
morseDot();
morseDot();
morseDot();
delay(dotDuration*2);
//E
morseDot();
delay(dotDuration*2);
//R
morseDot();
morseDash();
morseDot();
delay(dotDuration*2);
//T
morseDash();
delay(dotDuration*6);
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
