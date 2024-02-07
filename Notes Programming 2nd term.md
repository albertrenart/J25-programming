# 2 TERM NOTES 📝📝


## Vocabulary
- **Pseudocode:** "A notation resembling a simplified programming language, used in program design."
- **Parameter:** "A special kind of variable used in a subroutine to refer to one of the pieces of data provided as input to the subroutine."
- **Array:** "A data structure consisting of a collection of elements (values or variables), of same memory size, each identified by at least one array index or key."
- **Pseudorandom:** "A number which appears to be statistically random, despite having been produced by a completely deterministic and repeatable process."
- **Iteration:** "When talking about code, a similar but slighly changed one."
- **Bool:** A type of variable which is a decimal number.

-----------------------------------------------------------------------------------------

## Loops 🔄🔄
"A sequence of instructions that are continually repeated until a certain condition is reached"

These are necessary when writing code involving the same process many times.

**TYPES**
- While
- For

- WHILE:

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


- FOR:

  EXAMPLE:

```c++
for(int s = 0; s<15600; s++) 
  {motor.step(1);        
  motor2.step(-1);}
```

MEANING OF THE CODE:

  ```C++
For("to set the variable";"condition(if true, executed)";"update every time is executed the code")
{code}
```


---------------------------------------------------------------------------------------------------

## Notation🖊️🖊️

**CamelCase:**

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



FALTA: STRINGS; ARRAYS; TONE; SCOPE; DEFINING FUNCTIONS; 

DOCUMENTACION PROYECTO

