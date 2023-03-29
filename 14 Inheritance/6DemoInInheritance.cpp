//Demo in inheritance 
//executed from base to derived class 
//called from derived to base class
#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
        {
            cout<<"Default constructor of Base "<<endl;
        
        }
    Base(int x)
    {
        cout<<"Perameterized Constructor of Base "<<x<<endl;
    }
};
class Derived:public Base
{
    public:
        Derived()
        {
            cout<<"Default of derived "<<endl;
        }
        Derived(int a)
        {
            cout<<"Perameterized Constructor of Derived "<<a<<endl; //to call perameterized constructor of base
        }
        Derived(int x,int a):Base(x)
        {
            cout<<"Perameterized constructor of Derived "<<a<<endl;
        }
};
int main()
{
    Derived d;
    cout<<endl;
    Derived d1(10);
    cout<<endl;
    Derived d2(5,12);
    return 0;
}