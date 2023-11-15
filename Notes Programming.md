# Programming Notes

**Programming languages need to be consistent and univocal**


## Terminology
- **Algorithm**: An algorithm is a set of instructions that are followed to solve a problem. It's a computer's thought process.
- **Arrays**: Arrays are containers that hold variables; they're used to group together similar variables. You can think of arrays like shelves at a pet store. The array would be the shelf, and the animals in cages are the variables inside.
- **Bit**: The individual 1's and 0's you see in binary are called bits.
- **Camel case**: Variables should be named using camel case, meaning the first word of the name is lowercase and each new word after that is capitalized.
- **Coding languages**: Computers use coding languages to understand what people want them to do. Just like how people communicate with each other in English or Japanese, people communicate with computers in languages like C++ or Java.
- **Else statements**: Else statements are used to do something else when the condition in the if statement isn't true.
- **Else if statements**: Use an else if statement to do something when the if statement's condition isn't true but before the else statement. Else if statements also check a specific condition.
- **Functions**: A function is a block of code that can be referenced by name to run the code it contains.
- **Input**: Input is any interaction from the user to the program. In video games, this includes using the keyboard to move or using the mouse to look around.
- **Integrated Development Environment**: Software such as Arduino is known as an Integrated Development Environment (IDE), which is where you type your code and run your programs. Basically, an IDE is software that makes coding simpler.
- **Library**: A library is a collection of code made by other programmers for you to import and use.
- **Strings**: Variables can hold data besides numbers, including words. Programmers refer to variables holding words as strings.
- **Compiling**: Take and translate the whole source code into machine code.
- **Interperer**: Have the source code and transform line by line to machine code.
- **Boilerplate**: In computer programming, boilerplate code, or simply boilerplate, are sections of code that are repeated in multiple places with little to no variation.
- **Micro Controller**: are a type of computers.
- **LED**: Led Emiting Diode
- **Flow control** to decide what to execute at each moment.
- **Variable**: A place in memory to store data, identified for retrieval.
- **Brackets**: []
- **Parenthesis**: ()
- **Curly Braces**: {}


## Types of Programming Languages:
  - Highly typed PL: Python, JavaScript, Visual Basic, Delphi, Perl, PHP, ECMAScript, Ruby, C#
  - Loosely typed PL: JavaScript, Perl, PHP, Ruby, Shell


## Variables in C++
  - int
  - String
  - Char
  - Booleans (`true`/`false`)


## Example of Functions:
- digitalWrite(int pin, 1 or 0)
- delay()
- pinMode(<pin>, <mode>)

We cannot define a function inside the definition of another function.


## SERIAL READER
-	Setup
Serial.begin (9600)


## Example of Setup and Loop Functions
```C++
void setup() {
  // Setup code
}

void loop() {
  // Looping code
}
```

--------------------------------------------------

a = b ; 'a' gets value of 'b'
a == b , compares if they have the same value

--------------------------------------------------

## Comparators
'>' : bigger than

'<' : less than
  
'>=' : bigger or equal than

'<=' : less or equal than

'!='  : not eqaul

## Combo Burger (Boolean Operators)
- '&&' : AND operator
- '||' : OR operator
- '!' : NOT operator


```c++
//eggsInTheFridge
//potatoesInTheKitchen

if(eggsInTheFridge && potatoesInTheKitchen) {
   cookSpanishOmelette();
}
```

```c++
If ((eggsInTheFridge && potatoesInTheKitchen) || sausagesInTheKitchen) {
    cookSomeThing();
}
else (goToKebab)();}
```
```c++
if (¡eggsInTheFridge) {
    goToBuySomeEggs();
}
```
```c++
If(TRdelivered && meanGrade >= 5 && allFinalTestPassed)
(deliveredBachilleratoTitle());}
```

Nested ifs (if dentro de if)  
If (patatas) {
If (huevos){
Tortilla ();
}
Freir ();
}
Else {
Pedir sushi ();
}

## Nested ifs (if inside if)  
```C++
If (patatas) {
If (huevos){
Tortilla ();
}
Freir ();
}
Else {
Pedir sushi ();
}
```


## Comparations

Option A) we have a Boolean variable (bool)
If the variable value is true, then we go inside the if.
If the variable is false, then we don’t go inside the if. If there is an else, we go inside the else.


```C++
a = true;
if (a) {
goToParis ();
}
goToHongKong();
b = false;
if (b) {
goToBerlin ();
}
else {
goToBuenosAires () 
}
Else if. Else if is an extra condition where you can check before doing something else.
Bool a = true;
Bool b = false;
If (b) {
	//code not executed
}
else if (a) {
	//code executed 
}
else {
	//code not executed
}
```

----------------------------------------------------  

```C++
Switch (character) {
	Case ‘A’:
		//code for transforming into morse code letter A
		Break;
	Case ‘B’:
		//code for transforming into morse code letter B
		Break;
	Default:
		//code if the character is not valid or doesn’t have any of the declared values.
}
```

