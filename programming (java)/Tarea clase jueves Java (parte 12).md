## Tarea clase jueves (parte 12)

### 1. Write a program called ThreeFiveSevenSum to sum all the running integers from 1 and 1000, that are divisible by 3, 5 or 7, but NOT by 15, 21, 35 or 105.


```java
public class Main{  
   public static void main(String[] args) {
     int sum = 0;
     for (int i = 1; i < 1001; i ++) {
       if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
         if(i % 15 != 0 && i % 21 != 0 && i % 35 != 0 && i % 105 != 0) {
       
        sum = sum + i;
         }
       }
     }

  System.out.print(sum);
   }
}

```



### 2. Write a program called PrintLeapYears to print all the leap years between AD999 and AD2010. Also print the total number of leap years. (Hints: use a int variable called count, which is initialized to zero. Increment the count whenever a leap year is found.


```java
public class Main{  
   public static void main(String[] args) {
      int leapYearsBetween = 0;
      int totalLeapYears = 0;
   System.out.println("Leap years:");
         for (int i = 1000; i < 2011; i = i + 4) {
               System.out.println(i);
      totalLeapYears ++;
}

   System.out.print("Total leap years: ");
   System.out.println(totalLeapYears);

   }
}
```




            
         







