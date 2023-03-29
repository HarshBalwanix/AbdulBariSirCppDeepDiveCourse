#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void fun()
        {
            cout<<"fun of base "<<endl;
        }
};
class Derived:public Base
{
    public:
        void fun()
        {
            cout<<"fun of derived "<<endl;
        }
};
int main()
{
    Base *p=new Derived;
    // p->fun(); //will return fun of base if we didnt made it virtual fun 
    p->fun(); //will return fun of derived if we made base fun a virtual fun  
    return 0;
}