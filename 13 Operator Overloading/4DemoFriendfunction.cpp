/*
#include<iostream>

using namespace std;
class Complex
{
    // private:
    public:
        int real;
        int img;
        Complex(int r=0,int i=0)
        {
            real =r;
            img=i;
        }
    friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    Complex a(3,4);
    Complex b(4,5);
    Complex c;
    c=a+b;
    cout<<"Result is "<<c.real<<"+"<<c.img<<"i"<<endl;
    return 0;
}
*/

//Difference of two complex numbers 
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex(int r=0,int i=0)
        {
            real=r;
            img=i;
        }
    friend Complex operator-(Complex c1,Complex c2);
    void display()
    {
        cout<<"Result is "<<real<<"+i"<<img;
       
    }
};
    Complex operator-(Complex c1,Complex c2)
    {
        Complex temp;
        temp.real=c1.real-c2.real;
        temp.img=c1.img-c2.img;
        return temp;
    }
int main()
{
    Complex c1(7,9),c2(4,5),c3;
    c3=c1-c2;
    c3.display();
    
    return 0;
}