### Explorations on arduino IDE

[download arduino IDE](https://www.arduino.cc/en/software)

---

# Explanation of each program


[**Functional Programming_4**](https://github.com/albertrenart/J25-programming/tree/main/arduino/Functional_programming_4)

What this program does is to blink my name in the Arduino LED. We will use a different function for each letter. 

Also, we will use the function morseBlink, instead of dotDuration.

In the setup, it determines where to send the code (to the LED).

In the loop, we only have the function for each letter and a delay because of the end of a word (Albert). 



[**Functional Programming_5**](https://github.com/albertrenart/J25-programming/tree/main/arduino/Functional_programming_5)

This program prints my name (Albert) in Morse code, in the serial monitor.

Each letter has its function. Inside each letter function, we are using another two functions, one representing the dot, and another representing the dash.

Also, at the end of each letter the program 'prints' a forward slash, to separate the letters from each other.



[**Blink-Variation-01**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Blink-Variation-01.ino)

This program first determines the output.

It turns on the LED for two seconds and it turns it off for 1 second more.

After this, the LED will be blinking forever (half a second on, half a second off).



[**Blink_Variation_task**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Blink_Variation_task.ino)

This program first sets the output.

Then turns the LED on for one and a half seconds, then off for 1 second.

Now it turns the LED on for one and a half seconds, then off for 1 second more.

After this, it starts a loop where the LED is turned on for 0.125 seconds and then off for 0.125 seconds repeatedly. 



[**Functional_programming_1**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Functional_programming_1_int.ino)

This program displays my name (Albert) in Morse code in the built-in LED of the Arduino.

This code is based on two functions: morseDot and morseDash.

First this program sets the output, then it goes to the loop, where I have placed the functions in the correct order, which represents my name in Morse code.



[**Functional_programming_2**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Functional_programming_2.ino)

This program blinks my name (Albert) in Morse code in the Arduino LED.

The program first sets the output.

In the loop we have only the functions representing each letter, and a final delay because in Morse code there has to be a separation between words.

Inside each function representing a letter, there is a combination of dots and dashes representing that letter in Morse code.

To define what is a dot and what is a dash, there are two separate functions, which work with different delays depending on what they represent.



[**Functional_programming_3**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Functional_programming_3.ino)

This program shows my name (Albert) in Morse code in the built-in LED of the Arduino.

Instead, of using a function for the dot and a function for the dash like in 'Functional Programming 2', here I have used the morseBlink function which is used to control the blinking of the LED based on the number of dots specified for each letter.

The dotDuration variable controls the duration of a single dot.

The loop is the same as in 'functional programming 2', and each of the functions representing letters are more or less the same, but using the morseBlink function.



[**Morse_code_task**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Morse_code_task.ino)

This program first sets the output. It is designed to flash my name in Morse code in the built-in LED of the Arduino. 

The Morse code for each letter is represented by a sequence of dots (short flashes) and dashes (long flashes).



[**cook_2**](https://github.com/albertrenart/J25-programming/blob/main/arduino/cook_2.ino)

This code is designed to simulate a simple 'cooking system'.

If there are sufficient ingredients, and it is requested, the system can 'cook' a Spanish Omelette.

What you see at the top of the code are different variables that represent the ingredients and the quantities you have.

In the setup we only initiate the Serial Monitor.

In the loop, the code is continuously reading the input
```C++
String input = Serial.readString();
```
Then we have the first 'if' of the program, its purpose is to only send the input to the function 'decide' if there is something written: 
```C++
if (input != "") {
Serial.println("You have input: " + input);
input.trim();
decide(input);
```
The decide function checks the input string. If it's "cook," it calls the cook function. If it's "potato," it increments the potato count.

The cook function checks if there are enough ingredients to make a Spanish Omelette. 

If so, it prints a message indicating that a Spanish Omelette can be made and updates the quantities of ingredients accordingly.



[**cook_4**](https://github.com/albertrenart/J25-programming/blob/main/arduino/cook_4.ino)

This program extends the cooking system 3 to include another recipe: a pizza. It also includes an inventory.

The first thing you see at the top of the program are the different ingredients (which are variables) and the quantities you have.

I have decided to set all the values to 0, and, as you can 'buy' ingredients by typing their names, you are free to 'buy' only the ones you need to make the recipe you want.

In the setup, first we initiate the Serial Monitor.

Then, automatically, some welcome sentences are displayed, with a second of delay between each of these.

These sentences are some basic instructions to use the program.

In the loop, the code is continuously reading the input:
```C+
String input = Serial.readString();
```

Then we have the first 'if' of the program, its purpose is to only send the input to the function 'decide' if there is something written.

In the 'decide' there are a number of different 'ifs'.

The first three are to call different functions.

The following ones are to 'buy ingredients'. For example, if I type 'avocado' the system increments the value for 'avocado' by one, and also prints in the Serial Monitor '+1 Avocado'.

This happens with all the ingredients. 

If instead of typing the name of an ingredient, I type 'cook toasts with fried eggs and avocado' or 'cook pizza', then the program calls one function (cooktoasts) or another (cookpizza).

These two functions are almost the same, what changes are the ingredients and quantities.

These functions first compare the ingredients that the system has with the ones needed. 

If the system has enough ingredients, it prints a number of sentences that 'simulate' that the system has cooked what you wanted, then the quantities are adjusted, as the system has wasted some ingredients.

If the system hasn't got enough ingredients, it prints "We can't cook this because we need:" and then it writes down the ingredients that are missing.

This is done with the use of 'ifs'.

Finnaly, at the bottom of the program you can see the 'inventory' function. This dislpays the quantities and ingredients the system has. You can check the inventory by typing 'inventory'.



[**cook_task_3.2_toasts**](https://github.com/albertrenart/J25-programming/blob/main/arduino/cook_task_3.2_toasts.ino)

This program simulates that it is preparing some toasts with fried eggs and avocado.

The first thing you see at the top of the program are the different ingredients (which are variables) and the quantities you have.

I have decided to set all the values to 0, and, as you can 'buy' ingredients by typing their names, you are free to 'buy' only the ones you need to make the recipe you want (in this case there is only one possible).

In the setup first we initiate the Serial Monitor.

Then, automatically, a welcome sentence is displayed.

This sentence is a basic instruction to use the program.

In the loop, the code is continuously reading the input 
```C++
String input = Serial.readString();
```
Then we have the first 'if' of the program, its purpose is to only send the input to the function 'decide' if there is something written.

In the 'decide' function there are a number of different 'ifs'.

The first one is to call the 'cook' function if the input is 'cook'.

The following ones are to 'buy ingredients'. For example, if I type 'avocado' the system increments the value for 'avocado' by one, and also prints in the Serial Monitor '+1 Avocado'.

This happens with all the ingredients. 

If instead of typing the name of an ingredient, I type 'cook ', then the program calls the 'cook' function.

This function first compares the ingredients that the system has with the ones needed. 

If the system has enough ingredients, it prints a number of sentences that 'simulate' that the system has cooked what you wanted, and then the quantities are adjusted, as the system has wasted some ingredients.

If the system hasn't got enough ingredients, it prints "We can't cook this because we need:" and then it writes down the ingredients that are missing.

This is done with the use of 'ifs'.

Also, a simple instruction is printed: "To buy an ingredient, write its name (eggs/toasts/avocado/oil)".



[**cooking**](https://github.com/albertrenart/J25-programming/blob/main/arduino/cooking.ino)

This program simulates that it is cooking.

In the setup first we initiate the Serial Monitor.

In the loop, the code is continuously reading the input
```C++
String input = Serial.readString();
```
Then we have the first 'if' of the program, its purpose is to only send the input to the function 'decide' if there is something written.

The purpose of the 'decide' function is to call the 'cook' function only if the input is 'cook'.

The function cook only prints a sentence: Serial.println("we are cooking");



[**task_special_character**](https://github.com/albertrenart/J25-programming/blob/main/arduino/task_special_character.ino)

This program prints an image in the Serial Monitor using special characters.


[**Problem_solver_1**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Problem_solver_1.ino)

This code sets up serial monitor, then uses two 'for' loops in the setup function to solve drawing problems for numbers from 1 to 30.

After this, it does the same but in reverse.

As it does it only one time, all this is coded in the setup function, because it is done only one time.

To state somewhere that the problems are solved, the program prints it in the serial monitor.


[**Problem_solver_2**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Problem_solver_2.ino)

This code sets up serial monitor, then uses a 'for' loop in the setup function to solve drawing problems for numbers from 1 to 30, but skipping problem 17.

To skipp 17 we use an 'if' function.

As it does it only one time, all this is coded in the setup function, because it is done only one time.

To state somewhere that the problems are solved, the program prints it in the serial monitor.

[**Problem_solver_3**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Problem_solver_3.ino)

This code sets up serial monitor, then uses a 'for' loop in the setup function to solve problems from 1 to 100, but only the ones that are multipliers of 7.

The program uses a 'for' loop and an 'if':

```C++
    for (int numeroProblema = 1; numeroProblema <= 100; ++numeroProblema) {
        if (numeroProblema % 7 == 0) {
```

As it does it only one time, all this is coded in the setup function, because it is done only one time.

To state somewhere that the problems are solved, the program prints it in the serial monitor.


The code below only solves problems ended in 6 or 3. The mechanism is practically the same:

```C++
 for (int numeroProblema = 1; numeroProblema <= 100; ++numeroProblema) {
        if (numeroProblema % 10 == 3 || numeroProblema % 10 == 6) {
```

[**Arrays_1](https://github.com/albertrenart/J25-programming/blob/main/arduino/arrays_1.ino)

In this code we have to swap the first two letters from the world 'webi waboo' and we also have to swap the 'i' with an 'a'. At the end we have to substitute the second 'b' with a 'v'.

[**Arduino song**](https://github.com/albertrenart/J25-programming/blob/main/arduino/song.ino)

The song I used to make the wrap up project.

[**Defining Functions**](https://github.com/albertrenart/J25-programming/blob/main/arduino/Defining%20functions.md)

This are excercices to practice how to define a funtion.
