void outputMorse(String word)
{
  word.toUpperCase();
  for (int i = 0; i < word.length(); i++){
      switch(word[i]){
        case 'A':
          Serial.print(".-");
          break;
        case 'B':
          Serial.print("-...");
          break;
        case 'C':
          Serial.print("-.-.");
          break;
        case 'D':
          Serial.print("-..");
          break;
        case 'E':
          Serial.print(".");
          break;
        case 'F':
          Serial.print("..-.");
          break;
        case 'G':
          Serial.print("--.");
          break;
        case 'H':
          Serial.print("....");
          break;
        case 'I':
          Serial.print("..");
          break;
        case 'J':
          Serial.print(".---");
          break;
        case 'K':
          Serial.print("-.-");
          break;
        case 'L':
          Serial.print(".-..");
          break;
        case 'M':
          Serial.print("--");
          break;
        case 'N':
          Serial.print("-.");
          break;
        case 'O':
          Serial.print("---");
          break;
        case 'P':
          Serial.print(".--.");
          break;
        case 'Q':
          Serial.print("--.-");
          break;
        case 'R':
          Serial.print(".-.");
          break;
        case 'S':
          Serial.print("...");
          break;
        case 'T':
          Serial.print("-");
          break;
        case 'U':
          Serial.print("..-");
          break;
        case 'V':
          Serial.print("...-");
          break;
        case 'W':
          Serial.print(".--");
          break;
        case 'X':
          Serial.print("-..-");
          break;
        case 'Y':
          Serial.print("-.--");
          break;
        case 'Z':
          Serial.print("--..");
          break;
        default:
          delay(2000);
          break;

      }
      Serial.print("/");
      
  }          
  Serial.println("");
  delay(1000); 
    
}
