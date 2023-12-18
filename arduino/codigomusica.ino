 #define A 880
 #define B 987
 #define C 523
 #define D 587
 #define E 659
 #define F 698    
 #define G 783
 #define FS 1479.98 
 #define R 0

int tempo = 180;


int melody[] = {

  
  D, 4, B, 4, A, 4, G, 4, 
  D, 2, R, 4, D, 4, B, 4, 
  A, 4, G, 4, E, 2, R, 4,
  E, 4, C, 5, B, 4, A, 4, FS, 2,
  R, 4, D, 5, D, 5, C, 5,
  A, 4, B, 2, R, 4, D, 5,
  D, 5, D, 5, D, 5, E, 5,
  D, 5, B, 4, A, 4, G, 2,
  R, 4, B, 4, B, 4, B, 2,
  R, 4, B, 4, B, 4, B, 2,
  R, 4, B, 4, D, 5 , G, 4, A, 4,
  B, 2, R, 4, C, 5, C, 5,
  C, 3, C, 5, B, 4, B, 4,
  B, 4, B, 4, B, 4, A, 4,
  A, 4, B, 4, A, 2, R, 4,
  D, 3, R, 4, B, 4, B, 4,
  B, 2, R, 4, B, 4, B, 4,
  B, 2, R, 4, B, 4, D, 5,
  G, 4, A, 4, B, 2, R, 4,
  R, 4, C, 5, C, 5, C, 3,
  R, 4, C, 5, B, 4, B, 4,
  B, 4, B, 4, D, 5, D, 5,
  C, 5, A, 4, G, 2
  
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
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(8, melody[thisNote], noteDuration * 0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);

    // stop the waveform generation before the next note.
    noTone(8);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
