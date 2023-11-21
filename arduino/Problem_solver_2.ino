//Todos menos el 17 
void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 30; numeroProblema++) {
    if (numeroProblema != 17) {
      resolverProblemaDibujo(numeroProblema);
    }
  }
}
  void loop() {
  }

  void resolverProblemaDibujo(int n) {  
    Serial.print("Resolviendo problema");
    Serial.println(n);
  }
