#include<iostream>
using namespace std;
int main()
{
    int a,b,c,option;
    cout<<"Menu\n"<<"1.Add\n"<<"2.Multiply\n"<<"3.Divide\n"<<"4.Subtract\n"<<"Enter your choice"<<endl;
    cin>>option;
    cout<<"Enter two values\n";
    cin>>a>>b;
    switch(option)
    {
        case 1 : c=a+b;
                 cout<<"Result of "<<a<<" + "<<b<<" is "<<c;
                break;

        case 2 : c=a*b;
                 cout<<"Result of "<<a<<" * "<<b<<" is "<<c;
                break;

        case 3 : c=a/b;
                 cout<<"Result of "<<a<<" / "<<b<<" is "<<c;
                break;
        
        case 4 : c=a-b;
                 cout<<"Result of "<<a<<" - "<<b<<" is "<<c;
                break;

    }
    return 0;

}