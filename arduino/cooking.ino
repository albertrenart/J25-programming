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