#include<iostream>
using namespace std;
class Rectangle
{
    int length,breadth;
    public:
            Rectangle(int l=1,int b=1);//parameterized constructor
            Rectangle(Rectangle &rect);//copy constructor
            int setLengthBreadth(int l,int b);//Mutator
            int getLength();//Accessors
            int getBreadth();//Accessors
            int area();//Facilitators
            int perimeter();//Facilitators
            bool isSquare(); //Inspector
            ~Rectangle();  //destructor
            
};


int main()
{
    Rectangle r;
    r.setLengthBreadth(10,4);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    Rectangle r2(10,10);
    {
        if(r2.isSquare())
        {
            cout<<"Yes it is a square"<<endl;
        }
    }
    return 0;
}

Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &rect)
{
    length=rect.length;
    breadth=rect.breadth;
}
int Rectangle::area()   //scope resolution
{
    return length*breadth;
}
int Rectangle::perimeter() //scope resolution
{
    return 2*(length+breadth);
}
int Rectangle::setLengthBreadth(int l,int b)
{
                if(l>=0 && b>=0)
                {
                    length=l;breadth=b;
                }
                else if(l>=0 && b<0)
                {
                    length=l;breadth=0;
                }
                else 
                {
                    length=0;breadth=b;
                }
}  
int Rectangle::getBreadth()
{
    return breadth;
}
int Rectangle::getLength()
{
    return length;
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed"<<endl;
}
