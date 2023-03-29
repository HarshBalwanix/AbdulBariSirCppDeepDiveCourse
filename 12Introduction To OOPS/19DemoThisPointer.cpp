
// This pointer
#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:
            Rectangle(int length,int breadth)
            {
                this ->length=length;  //this pointer points towards outside one
                this ->breadth=breadth; 
            }
    int area(){ return length*breadth;}

};
int main()
{
    Rectangle r(10,6);
    cout<<r.area()<<endl;
    return 0;
}
