
#define DO2 1046.5
#define DO 523.25
#define SOL 783.99
#define LA 880
#define SI 987.77
#define RE2 1174.66
#define SILENCIO 0


#define CORCHEA 8
#define NEGRA 4
#define BLANCA 2
#define REDONDA 1

int tempo = 185;

int buzzer = 11;

int melody[] = { 

SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,RE2,NEGRA,SOL,NEGRA,LA,NEGRA,SI,REDONDA,

DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,LA,NEGRA,LA,NEGRA,SI,NEGRA,LA,BLANCA,RE2,BLANCA,

SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,RE2,NEGRA,SOL,NEGRA,LA,NEGRA,SI,REDONDA,

DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,RE2,NEGRA,RE2,NEGRA,DO2,NEGRA,LA,NEGRA,SOL,BLANCA,SILENCIO,BLANCA
};

int notes = sizeof(melody) / sizeof(melody[0]) / 2;

int wholenote = (60000 * 4) / tempo; 

int divider = 0, noteDuration = 0;

void setup() {

  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    divider = melody[thisNote + 1];
    if (divider > 0) {
   
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; 
    }


    tone(buzzer, melody[thisNote], noteDuration * 0.9);

 
    delay(noteDuration);

  
    noTone(buzzer);
  }
}




void loop() {

}
