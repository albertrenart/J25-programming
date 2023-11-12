void setup() {
  // put your setup code here, to run once:
pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void morseDot(){
  digitalWrite (LED_BUILTIN, 1);
delay(dotDuration);
}
