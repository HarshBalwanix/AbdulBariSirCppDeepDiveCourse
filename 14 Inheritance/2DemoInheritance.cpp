//Demo of base and derived class 
#include<iostream>
using namespace std;
class Base
{
    public:
        int x;
        void show()
        {
            cout<<"Base "<<x;
        }

};
class Derived : public Base
{
    public:
         int y;
         void display()
         {
             cout<<"Derived "<<y;
         }
};
int main()
{
    Base b;
    b.x=25;
    b.show();
    cout<<endl;
    Derived d;
    d.x=10;
    d.y=15;
    d.show();
    cout<<endl;
    d.display();
    return 0;
}