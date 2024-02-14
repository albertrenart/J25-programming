
```java
public class ThreeFiveSevenSum{  
   public static void main(String[] args) {
     int sum = 0
     for (int i = 1; i < 1001; i ++) {
       if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
         if(i % 15 != 0 || i % 21 != 0 || i % 35 != 0 || i % 105 != 0) {
       
       int sum = sum + i;
         }
       }
     }

  System.out.print(sum);
   }
}

```
