//Todos menos el 17 y el 23
void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 30; numeroProblema++) {
    if (numeroProblema != 17 && numeroProblema != 23) {
      resolverProblemaDibujo(numeroProblema);
    }
  }
}
  void loop() {
  }

  void resolverProblemaDibujo(int n) {  //data type, number
    Serial.print("Resolviendo problema");
    Serial.println(n);
  }
