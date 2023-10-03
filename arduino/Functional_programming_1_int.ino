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
