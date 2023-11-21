void setup() {
Serial.begin(9600);
for(int numeroProblema= 1;numeroProblema<=30;numeroProblema=numeroProblema+2){
resolverProblemaDibujo(numeroProblema); 

for(int numeroProblema=30;numeroProblema>=1;numeroProblema--){
resolverProblemaDibujo(numeroProblema);
}
}

void loop() {


}
void resolverProblemaDibujo(int n){ 
	Serial.print("Resolviendo problema");
	Serial.println(n);
}
