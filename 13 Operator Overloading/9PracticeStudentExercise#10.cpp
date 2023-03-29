//Write a class for rational number (p/q) with operator overloading of + and <<
#include<iostream>
using namespace std;
class Rational
{
    
    public:
        int p;
        int q;
    Rational(int a=1,int b=1)
    {
        p=a;
        q=b;
    }
    friend Rational operator+(Rational r1, Rational r2);
    friend ostream & operator<<(ostream &o,Rational &r1); 
     
};
    ostream & operator<<(ostream &o,Rational &r1)
    {
        o<<r1.p<<"/"<<r1.q;
        return o;
    }
    Rational operator+(Rational r1, Rational r2)
    {
        Rational temp;
        temp.p=r1.p*r2.q+r1.q*r2.p;
        temp.q=r1.q*r2.q;
        return temp;
    }
int main()
{
    Rational r(3,4),r1(2,5),r2;
    // operator<<(cout,r);
    cout<<"Rational number entered is "<<r<<endl;
    r2=r+r1;
    cout<<"Sum of "<<r<<" and "<<r1<<" is "<<r2;
    return 0;
}