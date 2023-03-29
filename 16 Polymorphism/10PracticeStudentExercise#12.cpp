/*
Write class to demonstrate polymorphism
Base class Shape
Derived classes
Rectangle 
Circle
*/
#include<iostream>
using namespace std;
class Shape
{
    public:
            virtual float area()=0;
            virtual float perimeter()=0;
};

class Rectangle:public Shape
{
    public:
        int length,breadth;
        Rectangle(int l=0,int b=0)
        {
            length=l;
            breadth=b;
        }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};
class Circle:public Shape
{
    public:
        int radius;
        Circle(int r=0)
        {
            radius=r;
        }
        float area()
        {
            return 3.14*radius*radius;
        }
        float perimeter()
        {
            return 2*3.14*radius;
        }
};
int main()
{
    Shape *s=new Rectangle(10,5);
    cout<<"Area of rectangle "<<s->area()<<endl;
    cout<<"Perimeter of rectangle "<<s->perimeter()<<endl;
    s=new Circle(10);
    cout<<"Area of circle "<<s->area()<<endl;
    cout<<"Perimeter of circle "<<s->perimeter()<<endl;
    return 0; 
}