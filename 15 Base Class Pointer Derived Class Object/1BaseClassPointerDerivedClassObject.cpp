/*
Base class Pointer and Derived Class Object
We cannot access derived class object if the pointer is pointing towards base class but we can call only base class functions
class Base
{
    public:
        void fun1();
        void fun2();
        void fun3();
};
class Derived: public Base
{
    public:
        void fun4();
        void fun5();

};

int main()
{
    Base b;
    b.fun1();
    b.fun2();
    b.fun3();
    Derived d;
    d.fun1();
    d.fun2();
    d.fun3();
    d.fun4();
    d.fun5();
}
this is normal way without pointer

int main()
{
    Base *p;
    p=new Derived(); //pointer is in base class pointing towards derived class, we can use functions of base only despite of being Derived class object
    p ->fun1();
    p ->fun2();
    p ->fun3();
    p ->fun4(); //cant call
}

Example 
class Rectangle
{

};
class Cuboid
{

};
int main()
{
    Rectangle *p;
    p=new Cuboid(); //we cant call functions of cuboid
}

example
BasicCar;

AdvancedCar //inheriting from basic car;

int main()
{
    BasicCar *p;
    p=AdvancedCar();
    you cannot access to advancedcar if your knowledge is stuck to basic car
}


but we cant do it like that 
derived *p;
p=new base();
as we can never access derived class from base object
*/