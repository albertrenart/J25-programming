// solves only the ones that are multipliers of 7 
void setup() {
  Serial.begin(9600);
    for (int numeroProblema = 1; numeroProblema <= 100; ++numeroProblema) {
        if (numeroProblema % 7 == 0) {
            resolverProblemaDibujo(numeroProblema);
        }
    }
}
  void loop() {
  }

  void resolverProblemaDibujo(int numeroProblema) { 
    Serial.print("Resolviendo problema");
    Serial.println(numeroProblema);
  }




    
