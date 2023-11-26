//All the numbers from 1 to 100 that has at least a 3 in their digits (for example 34 or 13)

void setup() {
  Serial.begin(9600);
    for (int i = 1; i <= 100; ++i) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 3) {
                resolverProblemaDibujo(i);
            }
            num /= 10;
        }
    }

void loop() {
  }

void resolverProblemaDibujo(int i) { 
  Serial.print("Resolviendo problema");
  Serial.println(i);
  }


//All the numbers from 1 to 100 that have either odd or multiple of 6

void setup() {
  Serial.begin(9600);
    for (int i = 1; i <= 100; ++i) {
        if (i % 2 != 0 || i % 6 == 0) {
           resolverProblemaDibujo(i);
        }
    }

void loop() {
  }

  void resolverProblemaDibujo(int i) { 
    Serial.print("Resolviendo problema");
    Serial.println(i);
  }


