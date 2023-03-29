//write simple program using compound assignment operators
#include<iostream>
using namespace std;
int main()
{   
    int a ,b,c,d;
    cout<<"enter value of a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;
    a -= b+c+d;
    cout<<"new a is "<<a<<endl;
    b += c+a;
    cout<<"new b is "<<b<<endl;
    c /= (d+b);
    cout<<"new c is "<<c<<endl;
    d *= a*b*c;
    cout<<"new d is "<<d<<endl;
    return 0;
}
