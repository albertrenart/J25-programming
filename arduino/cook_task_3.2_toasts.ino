//This program simulates that it is preparing some toasts with fried eggs and avocado
//The first thing you see at the top of the program are the different ingredients (which are variables) and the quantities you have.
//I have decided to set all the values to 0, and, as you can 'buy' ingredients by typing their names, you are free to 'buy' only the ones you need to make the recipe you want (in this case there is only one possible).
//In the setup first we initiate the Serial Monitor.
//Then, automatically, a welcome sentence is displayed.
//This sentence is a basic instruction to use the program.
//In the loop, the code is continuously reading the input ( String input = Serial.readString(); )
//Then we have the first 'if' of the program, its purpose is to only send the input to the function 'decide' if there is something written.
//In the 'decide' function there are a number of different 'ifs'.
//The first one is to call the 'cook' function if the input is 'cook'.
//The following ones are to 'buy ingredients'. For example, if I type 'avocado' the system increments the value for 'avocado' by one, and also prints in the Serial Monitor '+1 Avocado'.
//This happens with all the ingredients. 
//If instead of typing the name of an ingredient, I type 'cook ', then the program calls the 'cook' function.
//This function first compares the ingredients that the system has with the ones needed. 
//If the system has enough ingredients, it prints a number of sentences that 'simulate' that the system has cooked what you wanted, then the quantities are adjusted, as the system has wasted some ingredients,
//If the system hasn't got enough ingredients, it prints "We can't cook this because we need:" and then it writes down the ingredients that are missing.
//This is done with the use of 'ifs'.
//Also, a simple instruction us printed: "To buy an ingredient, write its name (eggs/toasts/avocado/oil)".






int eggs = 0;
int toasts = 0;
bool oil = false;
double avocado  = 0;
 
void setup(){
 
Serial.begin(9600);
Serial.println("To cook toasts with fried eggs and avocado, type 'cook'.");
}

void loop(){
 // put your main code here, to run repeatedly:
 String input = Serial.readString();
if(input != ""){
input.trim();
decide(input);
}
}


void cook(){
if(eggs >= 2 && 
 toasts >= 2 &&
 avocado >= 0.5 && oil ){
Serial.println("\n\nWe are cooking");
delay(1000);   
Serial.println("cooking...");
delay(1000);
Serial.println("cooking...");
delay(1000);
Serial.println("cooking...");
delay(1000);
Serial.println("Here you have toasts with fried eggs and avocado!");
Serial.println("\n\n");
 eggs = eggs - 2;
 toasts = toasts - 2;
 avocado = avocado - 0.5;
 }

 else {

 Serial.println("\n\n");
 Serial.println("We can't cook because we need:");
 delay(1000);

 if(eggs < 2) {Serial.println("- Eggs");
 delay(1000);
 }
 if(toasts < 2) {Serial.println("- Toasts");
 delay(1000);
 }
 if(avocado < 0.5) {Serial.println("- Avocado");
 delay(1000);
 }
 if(oil == false) {Serial.println("- Oil");
 delay(1000);
 }
 Serial.println("To buy an ingredient, write its name (eggs/toasts/avocado/oil)");
 Serial.println("\n\n");
}
}
void decide(String input){
if(input=="cook"){
cook();
}

if(input=="toasts"){toasts = toasts + 4;
Serial.println("+4 Toasts");
}

if(input=="avocado"){avocado++;
Serial.println("+1 Avocado");
}

if(input=="eggs"){eggs = eggs + 2;
Serial.println("+2 Eggs");
}

if(input=="oil"){oil = true;
Serial.println("+ Oil");
}
}

