//Demo 
#include<iostream>
using namespace std;

class Base //abstract or interface
{
    public:
        virtual void fun1()=0;
        virtual void fun2()=0;
};
class Derived:public Base
{
    public:
        void fun1()
        {
            cout<<"Fun1 of derived class "<<endl;
        }
        void fun2()
        {
            cout<<"Fun 2 of derived class"<<endl;
        }
};

int main()
{
    Base *b=new Derived();
    b->fun1();
    return 0;
}