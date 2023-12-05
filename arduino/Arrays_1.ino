
void setup() {
  Serial.begin(9600);
}

void swapFirstTwoLetters(String input){
  char temp = input[1];
  input.setCharAt(1, input[2]);
  input.setCharAt(2, temp);
  Serial.println(input);
}
void swapAandI(String input){
  char temp = input[3];
  input.setCharAt(3, input[6]);
  input.setCharAt(6, temp);
  Serial.println(input);
}

void loop() {
  String word = "webi wabo";
  swapFirstTwoLetters(word);
  swapAandI(word);
  delay(1000); 
}
