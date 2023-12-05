void setup() {
  Serial.begin(9600);
  int myNumbers[] = {42, 18, 7, 36, 91, 25, 14};

  int lowestNumber = findLowestNumber(myNumbers, sizeof(myNumbers) / sizeof(myNumbers[0]));
  
  Serial.print("The lowest number in the array is: ");
  Serial.println(lowestNumber);
}

int findLowestNumber(int arr[], int size) {
  int lowest = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < lowest) {
      lowest = arr[i];
    }
  }
return lowest;
}

//angel helped me
