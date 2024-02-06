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
      outputMorse(command);      
    }
    if (command.equals("cook")){
     cook();
    }
 }
