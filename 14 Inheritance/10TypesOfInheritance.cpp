/*
Types of Inheritance
class A
class B:A
this is simple/single Inheritance
Example- cuboid is inheriting from rectangle

class A
class B:A
class C:A
class D:A
this is herarchical Inheritance
Example- circle rectangle quadrilateral are inheriting from shape
         or Inova suzuki toyota are inheriting from car

class A
class B:A
class C:B
this is multilevel inheritance
Example- Class is point, circle is inheriting from point and if we give height to cirlce it will be cylinder 

class A
class B
class C:A,B
this is multiple inheritance(a class is inheriting from more than 1 class)
Example- classes are phone camera and smartphone is inheriting from both of these


Hybrid
When we try to mix herarchical and multiple inheritance
class A 
class B:A //herarchical
class C:A //herarchical
class D:B,C //multiple

but here if we want any function in D from class A, we have 2 paths viz through B or C  
hence we can say that we need to remove this problem 
this is removed by using virtual base class
virtual classes are used to remove the a   of parent class to children path or to remove multiple path
example
class A
{

};
class B:virtual public A
{

};
class C:virtual public A
{

};
class D:public B,public C
{

};

 */