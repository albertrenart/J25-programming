//This program simulates that it is cooking.
//In the setup first we initiate the Serial Monitor.
//In the loop, the code is continuously reading the input ( String input = Serial.readString(); )
//Then we have the first 'if' of the program, its purpose is to only send the input to the function 'decide' if there is something written.
//The purpose of the 'decide' function is to call the 'cook' function only if the input is 'cook'.
//The function cook only prints a sentence: Serial.println("we are cooking");


void setup() {
  Serial.begin (9600);
}

void loop() {
  String input = Serial.readString();
  if(input!=""){
  Serial.println("lo que has escrito es: "+input);
  input.trim();
  decide(input);
}
}

void decide(String input){
if  (input=="cook"){
cook();
}
}

void cook() {
Serial.println("we are cooking");
}
