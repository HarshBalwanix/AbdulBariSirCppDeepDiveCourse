#include<iostream>
using namespace std;

class Rectangle
{
    private:
            int length,breadth;
    public:
            int setLength_Breadth(int l,int b)
            {
                if(l>=0 && b>=0)
                {
                length=l;
                breadth=b;
                }
                else if(l>=0 && b<0)
                {
                    length=l;
                    breadth=1;
                }
                else
                {
                    length=1;
                    breadth=b;
                }
            }
            int area()
            {
                return length*breadth;
            }
            int perimeter()
            {
                return 2*(length+breadth);
            }
            // Rectangle() //Non perimetrized constructor
            // {
            //     length=1;
            //     breadth=1;
            // } //will not need this as we will manage to get it in perametrized constructor
            Rectangle(int l=1,int b=1) //Perimeterized constructor here we gave default arguments as l=1 and b=1 which carry ups the work of non parameterized constructor too 
            {
                setLength_Breadth(l,b);
            
            }
            Rectangle(Rectangle &r) //copy constructor
            {
                length=r.length;
                breadth=r.breadth;
            }
};
int main()
{
    Rectangle r1(10,5);
    // r1.setLength_Breadth(10,5);
    Rectangle r2(r1);
    cout<<r1.area()<<endl; 
    cout<<r2.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r2.perimeter()<<endl;
    return 0;

}