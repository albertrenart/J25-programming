# 2 TERM NOTES 📝📝


## Vocabulary📚📚
- **Pseudocode:** "A notation resembling a simplified programming language, used in program design."
- **Parameter:** "A special kind of variable used in a subroutine to refer to one of the pieces of data provided as input to the subroutine."
- **Array:** "A data structure consisting of a collection of elements (values or variables), of same memory size, each identified by at least one array index or key."
- **Pseudorandom:** "A number which appears to be statistically random, despite having been produced by a completely deterministic and repeatable process."
- **Iteration:** "When talking about code, a similar but slightly changed one."
- **Bool:** A type of variable which is a decimal number.
- **CLI:** Command line interface.
- **Flag:** In another part of the code, to change its behavior.

-----------------------------------------------------------------------------------------

## Loops 🔄🔄
"A sequence of instructions that are continually repeated until a certain condition is reached"

These are necessary when writing code involving the same process many times.

**TYPES**
- While
- For

- *WHILE:*

```C++
do while (fuel > 0){    // while the condition is true, 
  accelerate();         // this line is executed.
}
```

This would be an infinite loop

```C++
do while (true) {      // As this is always true,
  accelerate();        // this line will be executed forever.
}
```


- *FOR:*

  EXAMPLE:

```c++
for(int s = 0; s<15600; s++) 
  {motor.step(1);        
  motor2.step(-1);}
```

MEANING OF THE CODE:

  ```C++
For("definition of variable";"condition of iteration";"step every time code is executed")
{code to repeat}
```

---------------------------------------------------------------------------------------------------

## Notation🖊️🖊️

**camelCase:**

Used for naming variables, functions

```c++
carOne, accelerateToTwenty();
```

**PascalCase:**

Used for naming objects and classes.

Similar to camelCase, but the first letter is also uppercase.

```c++
HouseOne, MyBed
```

**kebab-case:**

Used for URLs. It also can be used to name files.

Words are in lowercase and separated by hyphens.

```c++
J25-programming, arduino-excercise-one
```

**snake_case:**

Same as kebab-case, but instead of hyphens, lowescores.

Sometimes used when spaces aren't allowed when naming a file or on other languages.

```c++
arduino_two, cook_pizza()
```

**SCREAMING_SNAKE_CASE:**

Its name explains it. Similar to snake case, but all the letters are capital ones.

Used for constants in some programming languages.

```c++
MIN_VALUE, NUMBER_E
```


----------------------------------------------------------------------------------------------------

## Arrays📦📦


![Arrays-in-C](https://github.com/albertrenart/J25-programming/assets/144990839/20f8bb44-476f-48d5-9661-913a60db40bf)


"An array is a collection of variables that are accessed with an index number."

Some aspects:
-	Its acces is fast
-	Relative small memory

*All these are valid declarations:*


```c++
  int myInts[6];           // Declare an array of a given length without initializing the values:
```
```c++
  int myPins[] = {2, 4, 8, 3, 6, 4};          // Declare an array without explicitely choosing a size (the compiler
                                              // counts the elements and creates an array of the appropriate size):
```
```c++
  int mySensVals[5] = {2, 4, -8, 3, 2};          // Declare an array of a given length and initialize its values:
```
```c++
  char message[6] = "hello";          // When declaring an array of type char, you'll need to make it longer
                                      // by one element to hold the required the null termination character:
```

**Accessing an array**

Arrays are zero-indexed, this means that the first element of the array is at index 0, therefore an array with ten elements, index nine is the last element

```c++
int myArray[10]={a, b, c, d, e, f, g, h, i, j};
 Serial.println(myArray[9])     //   prints 'j'
```
An element of an array will always have an index between 0 and n-1, (n = lenght of array)


**To assign a value to an array:**

```c++
mySensVals[0] = 10;
```

**To retrieve a value from an array:**

```c++
x = mySensVals[4];
```

**Arrays in FOR loops**

Arrays are sometimes used inside for loops. The variable of the array (often 'i') is used as the index. 

Example:

```c++
for (int i = 0; i < 5; i = i + 1) {
  Serial.println(completeExcercise[i]);
}
```
**Arrays with 'int'**

```C++
int[] grades=(4, 8, 9, 2, 7, 3}
int sum = 0;
sum = sum + grades [0];
sum = sum + grades [1];
sum = sum + grades [2];
sum = sum + grades [3];
sum = sum + grades [4];
sum = sum + grades [5] ;
int average = sum/6;
Serial.println(average);
```

If you have a large amount of grades, for example, you can use a FOR loop:

```C++
int[] grades = {4,2,6,8,3,9}
int sum = 0;
for(int n = 0, n <= 5, n++){ // 
sum = sum + grades [n];
}
int average = sum / 6
```

**How to interchange the value of some indexes:**

```c++
void swapFirstletters (string input){
String temporal = input [1];
input [1] = input [0];
input [0] = temporal;
}
```

----------------------------------------------------------------------------------------------------

## Strings 🧵🧵

![String_example](https://github.com/albertrenart/J25-programming/assets/144990839/d1953043-71f4-4a68-b8b2-be3cd6b79008)


"A string is traditionally a sequence of characters, either as a literal constant or as some kind of variable."

(Actually, a string is an array of characters)


**All these are valid declarations:**
```c++
char Str1[15];
```
```c++
char Str2[8] = {'a', 'r', 'd', 'u', 'i', 'n', 'o'};
```
```c++
char Str3[8] = {'a', 'r', 'd', 'u', 'i', 'n', 'o', '\0'};
```
```c++
char Str4[] = "arduino";
```
```c++
char Str5[8] = "arduino";
```
```c++
char Str6[15] = "arduino";
```

- Declare an array of chars without initializing it as in Str1

- Declare an array of chars (with one extra char) and the compiler will add the required null character, as in Str2

- Explicitly add the null character, Str3

- Initialize with a string constant in quotation marks; the compiler will size the array to fit the string constant and a terminating null character, Str4

- Initialize the array with an explicit size and string constant, Str5

- Initialize the array, leaving extra space for a larger string, Str6

*Single quotes or double quotes?*

Strings are always defined inside double quotes ("Abc") and characters are always defined inside single quotes('A').


*How to know the string length*

The length of a string can be obtained using the length() or size() member functions.

```c++
int length = message.length(); // Length is 13
```

**Arrays of strings**
Often convenient, when working with large amounts of text.

```c++
char *myStrings[] = {"This is string 1", "This is string 2", "This is string 3",
                     "This is string 4", "This is string 5", "This is string 6"
                    };
```

-----------------------------------------------------------------------------------------------------

## Tone🎵🎶

To make a sound if the arduino is connected to a speaker.

It is a function, it does not return anything.


**Syntax:**

```c++
tone(pin, frequency)
```
or

```c++
tone(pin, frequency, duration)
```

Pin: the Arduino pin on which to generate the tone.
Frequency: the frequency of the tone in hertz (It is not possible to generate tones lower than 31Hz).
Duration: the duration of the tone in milliseconds (optional).

*Important*

If you want to play different pitches on multiple pins, you need to call 'noTone()' on one pin before calling 'tone()' on the next pin.

-------------------------------------------------------------------------------------------------------

## Definition of a function 📈📈

![image](https://github.com/albertrenart/J25-programming/assets/144990839/0a6e082d-4db0-4c22-a353-7e4db5c3107d)

"A sequence of program instructions that performs a specific task, packaged as a unit."

Basically:

- A function is a block of code that only runs when it is called.

- You can pass data, known as parameters, into a function.

- Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.



```c++
void myFunction() {
  // code to be executed
}
```

'void' means that the function does not have a return value. Instead of 'void', you can put there the type of variable you want the function to return.
'myFunction' is the name of the function. Using camelCase, you can put the name you want, usually referring to what the function does.
'()' inside the parenthesis, the parameters you pass to the function

*Example:*

![image](https://github.com/albertrenart/J25-programming/assets/144990839/a4dc6891-f74d-40cf-9c62-cc8d9c2a32e3)

Here we see that this function does not return anything, the function is called 'decide', and the code passes a String named 'command' to the function.


![image](https://github.com/albertrenart/J25-programming/assets/144990839/2db97810-9ceb-42e3-bbda-3d7f4b00214a)

