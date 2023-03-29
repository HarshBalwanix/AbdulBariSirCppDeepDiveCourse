//Function overriding
#include<iostream>
using namespace std;
class Base
{
    public:
        void display()
        {
            cout<<"display of base"<<endl;
        }
}; 
class Derived:public Base
{
    public:
        void display() //function overriding of base of class 
        {
            cout<<"display of derived "<<endl;
        }
};  
int main()
{
    Base b; 
    b.display();
    Derived d;
    d.display();
    return 0;
} 
