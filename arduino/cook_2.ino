//This code is designed to simulate a simple 'cooking system'.
//If there are suficient ingredients, and it is requested, the system can 'cook' a Spanish Omelette.
//What you see at the top of the code are different variables which represent the ingredients and the quantities you have.
//In the setup we only initiate the Serial Monitor.
//In the loop , the code is continuously reading the input ( String input = Serial.readString(); )
//Then we have the first 'if' of the program, it purpose is to only send the input to the function 'decide' if there is something written (  if (input != "") {
// Serial.println("You have input: " + input);
// input.trim();
// decide(input); )
//The decide function checks the input string. If it's "cook," it calls the cook function. If it's "potato," it increments the potato count.
//The cook function checks if there are enough ingredients to make a Spanish Omelette. 
//If so, it prints a message indicating that a Spanish Omelette can be made and updates the quantities of ingredients accordingly.





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
