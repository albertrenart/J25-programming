void setup() {
Serial.begin(9600);
int depths [] = {90,85,88,83,82,91,91,100,97};
int increasedDepth = 0;
for(int i = 0; i < 8; i++){
  if (depths[i] - depths[i+1]<0) {
    increasedDepth++;
  }
 }
Serial.println(increasedDepth);
}




void loop() {}
