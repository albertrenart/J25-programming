// 1
public class Main {  // Save as "RunningNumberSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 9;      // Store the lowerbound, el numero mas bajo por el que empieza
      final int UPPERBOUND = 899;   // Store the upperbound, hasta el numelo que llega
      int sum = 0;   // Declare an int variable "sum" to accumulate the numbers
                     // Set the initial sum to 0
      // Use a while-loop to repeatedly sum from the lowerbound to the upperbound
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         sum = sum + number;  // Accumulate number into sum
         ++number;            // increment number
      }
      // Print the result
      System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}


// 2
public class Main {
  public static void main(String[] args) {
     final int LOWERBOUND = 1;      
     final int UPPERBOUND = 1000;  
     int sum = 0;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
         
        sum = sum + number;  
        number = number + 2;            
     }
 
     System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
  }
}


// 3
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 7;    
     final int UPPERBOUND = 1000;  
     int sum = 0;  
                   
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
         
        sum = sum + number;
        number = number + 7;          
     }
 
     System.out.println("The sum of all the numbers divisible by 7 from 1 to 1000 is: " + sum);
  }
}


// 3
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 7;    
     final int UPPERBOUND = 1000;  
     int sum = 0;  
                   
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
         
        sum = sum + number;
        number = number + 7;          
     }
 
     System.out.println("The sum of all the numbers divisible by 7 from 1 to 1000 is: " + sum);
  }
}


// 4
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 1;    
     final int UPPERBOUND = 100;  
     int sumOfSquares = 0;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
        sumOfSquares = sumOfSquares + (number * number);
        number = number + 1;  
     }
     
 
     System.out.println("The sum of the squares of all the numbers from 1 to 100 is: " + sumOfSquares);
  }
}


// 5
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 1;    
     final int UPPERBOUND = 10;  
 
     int product = 1;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
       
        product = product * number;
        number = number + 1;  
     }
     
   
     System.out.println("The product of all the numbers from 1 to 10 is: " + product);
  }
}


