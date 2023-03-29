//Adding of two complex numbers 
/*
#include<iostream>
using namespace std;
class Complex
{
    
    public:
            int real,img;
            Complex(int r=0,int i=0)
            {
                real=r;
                img=i;
            }
            Complex operator+(Complex x)
        
            {
                Complex temp;
                
                    temp.real=real+x.real;
                    temp.img=img+x.img;
                return temp;
            }  
            

};
int main()
{   
    Complex c1(3,4);
    Complex c2(5,7);
    Complex c3;
    // c3=c1.operator+(c2);
    
    c3=c1+c2;
    cout<<"Addition of these two complex numbers is "<<c3.real<<"+"<<c3.img<<"i"<<endl;
    return 0;
}
*/
//Difference of two complex numbers
#include<iostream>
using namespace std;
class Complex
{
    public:
        int real,img;
        Complex(int r=0, int i=0)
        {
            real=r;
            img=i;
        }
        Complex operator-(Complex x)
        {
            Complex temp ;
                temp.real=real-x.real;
                temp.img=img-x.img;
            return temp;
        }

};
int main()
{
    Complex c1,c2,c3;
    c1.real=5;c1.img=7;
    c2.real=3;c2.img=4;
    // c3=c1.operator-(c2);
    c3 =c1-c2;
    cout<<"Result is "<<c3.real<<"+"<<c3.img<<"i"<<endl;
}