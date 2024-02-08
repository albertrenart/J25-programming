## DOCUMENTATION WRAP UP PROJECT
**Problems faced**
- *Problem with sending some commands to the functions*
   This took me a while to solve. What was happening is that I was sending some commands through the serial monitor, but the programm was not answering.
    At the end, the problem was that I was using different named variabbles to refer to the same command. In some place I had written 'input' and on others 'command'.

  
- *Problem to increase the value of an ingredient with the function 'decidecook'*
  At the beggining, in my 'decide' function there was only a function that sended a command to the 'cook' file, but like this, I did not manage to
  increase the value of an ingredient when typing its name. What I have done at the end is to add all the 'if' refering to the ingredients to the main file.

  ![image](https://github.com/albertrenart/J25-programming/assets/144990839/1eaa5ec7-b3be-4756-9d6a-2979f3bb9a79)
