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
