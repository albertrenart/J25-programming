## DOCUMENTATION WRAP UP PROJECT

### What is it about?

The goal of this project is to make a program that represents all the progress we've made during this term or even year. This program is a combination of
other programs we've made and some new ones. 


###

- When you write something through serial is going to reply to the same command just to be sure that the command has been sent properly. 
- Write a line in Morse code if you write "morse" for the command and the line after will be sent as morse code. 
- If the command is correct send a cooking recipe for the dish of your choice. 
- Play (or stop) a song


**How is it composed**

![image](https://github.com/albertrenart/J25-programming/assets/144990839/780083fb-6f4d-49ba-9cf5-112fdb4aab36)



This project has a main file (wrap_up_arduino2), which only has a setup, a loop, and a 'decide' function. 

The decide function should have been more simple, but as I will explain later I had to add some more lines.


Also, there are three files more (song.h/morse.h/cook.h).

These are specific to each function of the code.










**Problems faced**
- *Problem with sending some commands to the functions*
   This took me a while to solve. What was happening was that I was sending some commands through the serial monitor, but the program was not answering.
    At the end, the problem was that I was using different named variables to refer to the same command. In some places I had written 'input' and in others 'command'.

  
- *Problem to increase the value of an ingredient with the function 'decidecook'*
  At the beginning, in my 'decide' function there was only a function that sent a command to the 'cook' file, but like this, I did not manage to
  increase the value of an ingredient when typing its name. What I have done at the end is to add all the 'if' referring to the ingredients to the main file.

  ![image](https://github.com/albertrenart/J25-programming/assets/144990839/1eaa5ec7-b3be-4756-9d6a-2979f3bb9a79)


- *Arduino IDE bugs*
  A problem I've had two or three times is that the Arduino IDE app bugged itself, and the code did not compile. What have I done to solve this? I have closed the app and opened it again.


- *The song did not sound*
  My code compiled, but it did not work. In theory, it was all correct, but the speaker didn't make any sound. I changed the speaker and the problem was still there. In the
  end, the problem was that I had forgotten to add to the tone function.
  ![image](https://github.com/albertrenart/J25-programming/assets/144990839/18a554bc-80a2-40ac-9fdf-f891b101dbb6)


- *Substring function was not working*
  The problem here was that the substring was not working, and it was sending 'morse' also in the string that was going to convert. The problem was that I was sending the command without        subtracting the first word (morse).

  Before (It was sending 'command'):
  
  ![image](https://github.com/albertrenart/J25-programming/assets/144990839/2a95d84d-6577-41ab-b82a-e7e5c31b4c13)

  After (Now it is sending sendToMorse, which it is now trimmed):
  
  ![image](https://github.com/albertrenart/J25-programming/assets/144990839/e1daf39e-d247-4286-ae18-47c2b80c4b35)



