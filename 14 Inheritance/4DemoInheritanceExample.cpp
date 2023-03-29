//Example of Inheritance
#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length,breadth;
    public:
        Rectangle(int l=0,int b=0){length=l;breadth=b;};
        void setlength(int l){length=l;}
        void setbreadth(int b){breadth=b;}
        int getlength(){return length;}
        int getbreadth(){return breadth;}
        int area();
        int perimeter();
};
 int Rectangle::area()
{
    return getlength()*getbreadth();
}
int Rectangle::perimeter()
{
    return 2*getlength()*getbreadth();
}
class Cuboid:public Rectangle
{
    int height;
    public:
            Cuboid(int h=0)
            {
               
               int height=h;
            }
            int getheight(){return height;}
            void setheight(int h){height=h;}
            // int area();
            int volume();
};
int Cuboid::volume()
{
    return getlength()*getbreadth()*height;
}
int main()
{
    Rectangle r;
    r.setlength(10);
    r.setbreadth(5);
    cout<<r.area();
    cout<<endl;
    Cuboid c1;
    c1.setbreadth(5);
    c1.setlength(10);
    c1.setheight(10);
    cout<<c1.volume();
    return 0;
}