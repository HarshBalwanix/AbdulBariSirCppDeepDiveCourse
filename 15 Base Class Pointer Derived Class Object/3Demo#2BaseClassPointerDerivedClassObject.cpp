//Demo #2
#include<iostream>
using namespace std;
class Rectangle
{
    public:
        void area()
        {
            cout<<"Area of rectangle "<<endl;
        }
};
class Cuboid:public Rectangle
{
    public:
        void volume()
        {
            cout<<"Cuboid Volume "<<endl;
        }
};
int main()
{
    Cuboid c;
    c.area();
    c.volume();
    Rectangle *p;
    p=new Cuboid;
    p->area();
    // p->volume(); cant call
    return 0;
}