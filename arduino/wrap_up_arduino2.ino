#include "song.h"
#include "cook.h"
#include "morse.h"

void setup() {
Serial.begin(9600);
}


void loop(){
  String command = Serial.readString();
if(command != ""){
  command.trim();
  decide(command);
}
}


void decide (String command){
  
    Serial.print("Your input: ");
    Serial.println(command);
    
    if (command.equals("play")) {
     playMusic();
      return;
    }
    if (command.equals("stop")){
     stopTheMusic;
    }
    if (command.startsWith("morse")){
      String sendToMorse = command.substring(5);
      outputMorse(sendToMorse);      
    }
    if (command.equals("cook")){
     cook();
    }
    if (command.equals("cook pizza")){
     cookpizza();
    }
    if (command.equals("cook toasts")){
     cooktoasts();
    }
    if (command.equals("toasts")){ 
      decidecook(command);
    }
if (command.equals("avocado")){ 
      decidecook(command);
    }
    if (command.equals("eggs")){ 
      decidecook(command);
    }
    if (command.equals("oil")){ 
      decidecook(command);
    }
    if (command.equals("dough")){ 
      decidecook(command);
    }
    if (command.equals("chicken")){ 
      decidecook(command);
    }
    if (command.equals("bacon")){ 
      decidecook(command);
    }
    if (command.equals("mushrooms")){ 
      decidecook(command);
    }

 }
