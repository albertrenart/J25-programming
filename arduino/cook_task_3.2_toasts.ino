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

