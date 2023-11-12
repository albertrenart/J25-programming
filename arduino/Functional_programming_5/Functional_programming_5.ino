int dotDuration = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
morseA ();
morseL ();
morseB ();
morseE ();
morseR ();
morseT ();
Serial.println();
delay(1000);
}

void morseDot(){
 Serial.print(".");
}

void morseDash(){
Serial.print("_");
}

void morseA () {
morseDot();
morseDash();
Serial.print("/");
}

void morseL () {
morseDot();
morseDash();
morseDot();
morseDot();
Serial.print("/");
}

void morseB () {
morseDash();
morseDot();
morseDot();
morseDot();
Serial.print("/");
}

void morseE (){
morseDot();
Serial.print("/");
}

void morseR () {
morseDot();
morseDash();
morseDot();
Serial.print("/");
}

void morseT () {
morseDash();
Serial.print("/");
}