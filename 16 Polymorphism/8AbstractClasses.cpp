/*
Abstract Classes are classes which have pure virtual function we cant create a object of that class but we can have a pointer to acheive polymorphism
class Base
{
    public:
        void fun1()
        {
            cout<<"base fun 1 ";
        }
        virtual void fun2()=0; //pure virtual function     
};

class Derived:public Base
{
    void fun2()
    {
        cout<<"derived fun 2 ";
    }
};
three types of classes are 
1 base class with all concrete function for reusability
2 base class with some virtual and some concrete function for polymorphism and reusability also called as abstract class
3 base class with all pure virtual functions for polymorphism alse called as interface also called as abstract class
*/