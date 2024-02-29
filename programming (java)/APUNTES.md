# JAVA NOTES

**INTRODUCTION**

Java was released in 1995. This programming languake is used for desktop apps, webs and mobile devices.
Java is known for its simplicity, robustness, and security features, making it a popular choice for enterprise-level applications.

(Minecraft uses javascript, whcih is almost identical to java)
‎ 

 ‎  
**TERMINOLOGY**
- Class: A basic building block. 
- Static: Always in memory.
- Public: All the code can access it.
- Object: Bloc of code which includes a name, attributes, and methods.
- Case sensitive: The program distinguishes lowercase letters from uppercase letters.
- PC: Personal computer.
- Interface: Through where a person communicates with a machine.
- GUI: Graphic user interface.
- CLI: Command line interface.
- Abstraction: "The process of generalizing concrete details,[1] such as attributes, away from the study of objects and systems to focus attention on details of greater importance."
- Refactorize: Make small changes in a program to make it work as you want.
- OOP: Object Oriented Programming.
- Final: When placed before a variable, it means it cannot be changed during execution, like a constant.
- Instance: "A specific realization of any object."
- UML diagram: Unified Modeling Language.
- Void: The return value is 0.
‎ 

 ‎  
**TO START WRITING A CODE:**

```java
public class Main {
  public static void main(String[] args) {
    System.out.println("Hello World");
  }
}
```

The first 'main' should be substituted by the name of the file. If the name of the file is 'Albert.java', that should be replaced by 'Albert'.


*Note:* Java is case-sensitive, "MyClass" and "myclass" are not the same.
‎ 

 ‎  

**INSTEAD OF USING 'Serial.println()', USE THIS:**

```java
public static void main(String[] args) {
  System.out.println("Hello World");
}
```

If you want to print a number, you don't need to add ' ':

```java
System.out.println(3);
```

Also, you can do mathematical calculations:

```java
System.out.println(2 * 5);
```
‎ 

 ‎  
**HOW TO DECLARE A VARIABLE:**

```java
int myNum = 5; //integer number
float myFloatNum = 5.99f; //float
char myLetter = 'D';  //between ' '
boolean myBool = true;
String myText = "Hello";   //between " "
```
‎ 

 ‎  

**COMPARATORS WORK THE SAME WAY AS IN C++:**

- '>' : Bigger than

- '<' : Less than
  
- '>=' : Bigger or equal than

- '<=' : Less or equal than

- '!='  : Not eqaul

- '&&' : AND operator
  
- '||' : OR operator
  
- '!' : NOT operator

- '+' : Additiom

- '-' : Substraction

- '/' : Division

- '%' : Modulus

- '++' : Increases the value of a variable by 1

- '--' : Decreases the value of a variable by 1
‎ 

 ‎  

**WHILE LOOPS**

While loops execute a block of code as long as a specified condition is true.

```java
while (condition) {
  // code block to be executed
}
```
‎ 
*EXAMPLE:*

```java
int i = 0;
while (i < 5) {
  System.out.println(i);
  i++;
}
```

This will print 0, 1, 2, 3, 4.

Note: Do not forget to increase the variable used in the condition, otherwise the loop will never end!
‎ 

 ‎  

**UML DIAGRAMS**

"The class diagram depicts a static view of an application. It represents the types of objects residing in the system and the relationships between them."

This diagram makes the construction of a code easier, because it is very visual.

*HOW IS A UML DIAGRAM STRUCTURED?*
‎ 

![image](https://github.com/albertrenart/J25-programming/assets/144990839/366e7e05-8fde-4bf4-81bb-a5f84ccb6fde)
‎ 

‎ 
*Upper Section:* The upper sectionhas the name of the class. A class is a representation of similar objects that share the same relationships, attributes, operations, and semantics.

Important:

- The first letter of a Class has to be a capital letter
  
‎ 

*Middle Section:* The middle section constitutes the attributes.

Important:

- The attributes are written along with their visibility factors, which are public (+), private (-), protected (#), and package (~).
    
‎ 

*Lower Section:* The lower section contain methods or operations.


EXAMPLE:

![Imagen de WhatsApp 2024-02-19 a las 09 54 49_84d42a99](https://github.com/albertrenart/J25-programming/assets/144990839/54938222-69a3-4263-9977-e1e1cfe83d14)

‎ 


[UML diagrams](https://www.javatpoint.com/uml-class-diagram)





