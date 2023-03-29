#include<iostream>
using namespace std;
class Base
{   
    public:
        void fun1()
        {
            cout<<"Fun1 of base"<<endl;
        }


};
class Derived:public Base
{   public:
    void fun2()
    {
        cout<<"fun2 of derived "<<endl;

    }
};

int main()
{
    Derived d;
    Base *p=&d;
    // //or 
    // Base *ptr;
    // ptr=new Derived(); 
    d.fun1();
    d.fun2();
    p->fun1();
    // p->fun2();// cant call

    return 0;
}