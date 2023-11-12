//This program extends the cooking system 3 to include another recipe: a pizza. It also includes an inventory.
//The first thing you see at the top of the program are the different ingredients (which are variables) and the quantities you have.
//I have decided to set all the values to 0, and, as you can 'buy' ingredients by typing their names, you are free to 'buy' only the ones you need to make the recipe you want.
//In the setup first we initiate the Serial Monitor.
//Then, automatically, some welcome sentences are displayed, with a second of delay between each of these.
//These sentences are some basic instructions to use the program.
//In the loop, the code is continuously reading the input ( String input = Serial.readString(); )
//Then we have the first 'if' of the program, its purpose is to only send the input to the function 'decide' if there is something written.
//In the 'decide' there are a number of different 'ifs'.
//The first three are to call different functions.
//The following ones are to 'buy ingredients'. For example, if I type 'avocado' the system increments the value for 'avocado' by one, and also prints in the Serial Monitor '+1 Avocado'.
//This happens with all the ingredients. 
//If instead of typing the name of an ingredient, I type 'cook toasts with fried eggs and avocado' or 'cook pizza', then the program calls one function (cooktoasts) or another (cookpizza).
//These two functions are almost the same, what changes are the ingredients and quantities.
//These functions first compare the ingredients that the system has with the ones needed. 
//If the system has enough ingredients, it prints a number of sentences that 'simulate' that the system has cooked what you wanted, then the quantities are adjusted, as the system has wasted some ingredients,
//If the system hasn't got enough ingredients, it prints "We can't cook this because we need:" and then it writes down the ingredients that are missing.
//This is done with the use of 'ifs'.
//Finnaly, at the bottom of the program you can see the 'inventory' function. This dislpays the quantities and ingredients the system has. You can check the inventory by typing 'inventory'.


int eggs = 0;
int toasts = 0;
bool oil = false;
double avocado  = 0;
int dough = 0;
double chicken = 0;
int mushrooms = 0;
bool bacon = 0;

 
void setup(){
 
Serial.begin(9600);
Serial.println("What would you want to cook, toasts with fried eggs and avocado or pizza?");
delay(1000);
Serial.println("If you want toasts with fried eggs and avocado, type 'cook toasts with fried eggs and avocado'.");
delay(1000);
Serial.println("If you want a pizza, type 'cook pizza'.");
delay(1000);
Serial.println("\nTo see the ingredients you have, type 'inventory'.");
}

void loop(){
 // put your main code here, to run repeatedly:
 String input = Serial.readString();
if(input != ""){
input.trim();
decide(input);
}
}


void cooktoasts(){
if(eggs >= 2 && 
 toasts >= 2 &&
 avocado >= 0.5 && oil ){
Serial.println("\n\nWe are cooking toasts");
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
 Serial.println("We can't cook this because we need:");
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

void cookpizza(){
if(dough >= 1 && 
 chicken >= 0.5 &&
 mushrooms >= 6 && 
 bacon){
Serial.println("\n\nWe are cooking pizza");
delay(1000);   
Serial.println("cooking...");
delay(1000);
Serial.println("cooking...");
delay(1000);
Serial.println("cooking...");
delay(1000);
Serial.println("Here you have your pizza!");
Serial.println("\n\n");
 dough = dough - 1;
 chicken = chicken - 0.5;
 mushrooms = mushrooms - 6;
 bacon = false;
 }

 else {

 Serial.println("\n\n");
 Serial.println("We can't cook this because we need:");
 delay(1000);

 if(dough < 1) {Serial.println("- Dough");
 delay(1000);
 }
 if(chicken < 0.5) {Serial.println("- Chicken");
 delay(1000);
 }
 if(mushrooms < 6) {Serial.println("- Mushrooms");
 delay(1000);
 }
 if(bacon == false) {Serial.println("- Bacon");
 delay(1000);
 }
 Serial.println("To buy an ingredient, write its name (dough/chicken/mushrooms/bacon)");
 Serial.println("\n\n");
}
}

void decide(String input){
if(input=="cook toasts with fried eggs and avocado"){
cooktoasts();
}

if(input=="cook pizza"){
cookpizza();
}

if(input=="inventory"){
inventory();
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

if(input=="dough"){dough = dough + 2;
Serial.println("+2 Doughs");
}

if(input=="chicken"){chicken = chicken + 1;
Serial.println("+1 Chicken");
}

if(input=="mushrooms"){mushrooms = mushrooms + 10;
Serial.println("+10 Mushrooms");
}

if(input=="bacon"){bacon = true;
Serial.println("+ Bacon");
}
}

void inventory(){
Serial.println("\nThese are the ingredients we have at the moment:");
delay(1000);
Serial.print("- ");
Serial.print(eggs);
Serial.println(" egg(s)");
Serial.print("- ");
Serial.print(toasts);
Serial.println(" toast(s)");
Serial.print("- ");
Serial.print(avocado);
Serial.println(" avocado(s)");
Serial.print("- ");
Serial.print(dough);
Serial.println(" dough(s)");
Serial.print("- ");
Serial.print(chicken);
Serial.println(" chicken(s)");
Serial.print("- ");
Serial.print(mushrooms);
Serial.println(" mushroom(s)");
if(oil){Serial.println("- oil");}
  else{Serial.println("- We don't have oil");}
if(bacon){Serial.println("- bacon");}
  else{Serial.println("- We don't have bacon");}   
Serial.println("\nTo buy an ingredient, write its name (dough/chicken/mushrooms/bacon/eggs/toasts/avocado/oil)");
}
