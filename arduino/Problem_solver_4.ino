void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 30; numeroProblema++) {
    if (numeroProblema%2==1 && numeroProblema%3==0) { //multiplos de 3 que son impares
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
