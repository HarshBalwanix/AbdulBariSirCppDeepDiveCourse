/*
Love Babbar
What is OOP?
OOP stands for Object-Oriented Programming.

Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

OOP is faster and easier to execute
OOP provides a clear structure for the programs
OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
OOP makes it possible to create full reusable applications with less code and shorter development time
Tip: The "Don't Repeat Yourself" (DRY) principle is about reducing the repetition of code. You should extract out the codes that are common for the application, and place them at a single place and reuse them instead of repeating it.



Object Oriented Programming With Real world Example
Basically why we are write coding ,to solve our real world problem right.
In OOP a logic is right base on the object with this features
1.abstraction
2.encapsulation
3.inheritance
4.polymorphism
There are a lot of Car,bike,ATM and coffee machine.and there brands and name also different.
In OOP those are called object .
Objects logic are done by classes for example ,by phone we can call,Bluetooth ,take photo etc. those every logic
will be divide as classes.When we are creating class we need consider about SOLID principle.
Example for object and class
public class Phone
{
public string Name{get; set;}
public int IMINumber{get; set;}
public string Type{get; set;}
public void Dial
{
//implemention of function
}
public void SendMassage
{
//implemention of function
}
}
Abstraction
Before know about abstraction in OOP.We need to know what is the meaning of abstraction in English.
Abstraction means only show relevant data and details rest of others are hide.this is the most important pillar in OOP. This is mostly done by interfaces rather than abstract class.
Interface
Abstraction is done by classes or interface.
Abstract classes may have not implemented methods.
Abstract class
Abstract classes may have implemented methods.
We can generate tv by remote ,here remote is the interface between tv and man.
When interface and when abstract classes
So if you need multiple inheritance and a clear blueprint than has only the design and not the implementation; you go for interface. If you don’t need multiple inheritance but you need a mix of design plan and pre-implementation then abstract class is your choice.
Some real world example
1.When we are making a call it only concatenate about the numbers and display that in screen,we really do not know
how this connect with other number.
2. We send data from Bluetooth we really do not know how it connect with other phone or devices.
Encapsulation
Both Abstraction and Encapsulation works hand in hand because abstraction which have to show in a level that particular
details access by encapsulation.
Example
1.When we turn on the Bluetooth we can assess to connect to other phone but not access to call or send sms from that
phone that level is hidden from encapsulation(some of abstraction is available).
2.If i connect with kajas phone and kajas connect with sumanie phone ,but i do not have access to connect with sumanie is phone
through kajas phone.this kind of hidden will handle by encapsulation.
This are handle by access specifier like public,private,protected and internal.
Polymorphism
Simple example for it is,we are turn on the phone by one button at the same time we can turn off the phone by the same button.
Example
We can send normal text massage and we can send video massage also.
In here we need to change the mode.
Here is Polymorphism used.
public class Samsumg : Mobile  
{  
    public void Massage()  
    {  
        Console.WriteLine("Text massage  sent");  
    }  
  
     
    public void Massage(string MassageType)  
    {  
        Console.WriteLine("Change the massage type " + MassageType + " Type");  
    }  
}  
Inheritance
Creating a new class (sub class) from base/super class is called inheritance.
When we inherit all the features from base/super class will be in in the sub class.
There are mainly 5 types of inheritance:
1 Single level inheritance
2 Multi-level inheritance
3 Hierarchical inheritance
4 Hybrid inheritance
5 Multiple inheritance
Single level inheritance
   Mobile -> Samsung
   Here some features of mobile is used in Samsung brand.
Multiple level inheritance
   Mobile -> Samsung ->Samsung S5
   S5 have more features than Samsung J1 ,so they use new features with old features.
Hierarchical inheritance
Mobile ->Nokia
       ->Samsung
    Some of the features may use in two type of brands.
Hybrid inheritance
   Mobile ->Nokia -> Nokia 3310
          ->Samsung -> Samsung S5
   Some of the features may use in two type of brands, those brands may publish new brands with new features.
Multiple inheritance
    iMobile    itelephone
        |            |
         ->Samsung <-
Here we can not use abstract class just because their may be duplicate values .that is ,we use interfaces.
But we need to clear that both methods are used abstraction.

Why we need OOPs in Programming language?
Object-Oriented Programming has the following advantages:

1 OOP provides a clear modular structure for programs which makes it good for defining abstract datatypes where implementation details are hidden and the unit has a clearly defined interface.
2 OOP makes it easy to maintain and modify existing code as new objects can be created with small differences to existing ones.
3 OOP provides a good framework for code libraries where supplied software components can be easily adapted and modified by the programmer. This is particularly useful for developing graphical user interfaces.
4 Garbage collection. Not having to manually free heap-allocated data after use is a good thing.
5 Interfaces. Being able to specify that a type must support a number of operations, but otherwise leave it unspecified, is also a good thing. The technical term for this is “bounded polymorphism”.



Limitations of OOP
1. Steep learning curve: The thought process involved in object-oriented programming
may not be natural for some people, and it can take time to get used to it. It is
complex to create programs based on interaction of objects. Some of the key
programming techniques, such as inheritance and polymorphism, can be
challenging to comprehend initially.
2. Larger program size: Object-oriented programs typically involve more lines of code
than procedural programs. 
3. Slower programs: Object-oriented programs are typically slower than procedurebased programs, as they typically require more instructions to be executed.
4. Not suitable for all types of problems: There are problems that lend themselves well
to functional-programming style, logic-programming style, or procedure-based
programming style, and applying object-oriented programming in those situations will
not result in efficient programs. 



*/
