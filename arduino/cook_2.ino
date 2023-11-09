int eggs = 4;
int potato = 0;
bool oil = true;
double onion = 1;
 
void setup() {
 // put your setup code here, to run once:
 Serial.begin(9600);
}
 
void loop() {
 // put your main code here, to run repeatedly:
 String input = Serial.readString();
 if (input != "") {
 Serial.println("You have input: " + input);
 input.trim();
 decide(input);
 }
}


 
void cook() {
 Serial.println("We are cooking");
 if (eggs >= 2 &&
 potato == 1 &&
 onion >= 0.25 && oil ) {
 Serial.println("you have a Spanish Omelette");
 eggs = eggs - 2;
 potato--;
 onion = onion - 0.25;
 }
}
void decide(String input) {
 if (input == "cook") {
 cook();
 
 }
 if(input=="potato"){potato++;}}