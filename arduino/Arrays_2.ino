void setup() {
  Serial.begin(9600);

  String webiwabo = "webiwabo";

  Serial.println(webiwabo);
  Serial.println(webiwabo[0]);

  String juanito = String(webiwabo[1]); // Added String() constructor
  Serial.println(juanito);

  char temp = webiwabo[1];
  webiwabo[1] = webiwabo[0];
  webiwabo[0] = temp;

  Serial.println(webiwabo);

  // Swap 'a' and 'i'
  String anotherwebiwabo = "webiwabo";

  Serial.println(anotherwebiwabo);
  Serial.println(anotherwebiwabo[3]);

  String pepito = String(anotherwebiwabo[5]); // Added String() constructor
  Serial.println(pepito);

char temp2 = anotherwebiwabo[3];
  anotherwebiwabo[3] = anotherwebiwabo[5];
  anotherwebiwabo[5] = temp2;

  Serial.println(anotherwebiwabo);

  // Moved the following lines inside setup
  Serial.println("Original String: " + myString);

  myString.setCharAt(6, 'v');

  Serial.println("Modified String: " + myString);
}

void loop() {

//angel helped me
