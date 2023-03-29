#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex(int r=0,int i=0)
        {
            real =r;
            img=i;
        }
       friend ostream & operator<<(ostream &o,Complex &c1);
       //or we can write also like this and then we can remove return o too 
    //    friend void operator<<(ostream o,Complex c1);
        
};
ostream & operator<<(ostream &o,Complex &c1)
{
    o<<c1.real<<"+i"<<c1.img<<endl;
    // return o;
} 
int main()
{
    Complex c(2,4),c1(3,4);
    cout<<c;
    // or
    operator<<(cout,c1);
    return 0;
}