#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float d;
    cout<<"Assuming the quadratic equation in the form of ax**2+bx+c=0, enter value of a,b,c "<<endl;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    cout<<"Enter value of c"<<endl;
    cin>>c;

    d = (b*b)-4*a*c;

    if(d==0)
    {
        cout<<"Roots are equal and real"<<endl;
    }
    else if(d>0)
    {
        cout<<"Roots are real and distinct"<<endl;
    }
    else
    {
        cout<<"Roots are imaginary and in pair"<<endl;
    }
    return 0;
}