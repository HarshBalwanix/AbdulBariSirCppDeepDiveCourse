//Demo
#include<iostream>
using namespace std;

class Outer
{
    public:
        int a=10;
        static int b;
        int fun()
        {
            i.show();
        }
        class Inner
        {
            public:
                int show()
                {
                    cout<<"Show"<<endl;
                    cout<<"B is "<<b<<endl;
                    // cout<<"A is "<<a<<endl; not accessible
                }
        };
        Inner i;
};
int Outer::b=20;


int main()
{
    Outer::Inner i1; // can create object of inner class here too with scope resolution as it is public but if we Inner class Private then object will not be created from here
    Outer o;
    o.fun();
    return 0;
}