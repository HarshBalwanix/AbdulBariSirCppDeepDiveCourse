// Just demonstration of max of 3 numbers
//maximum of 3 numbers
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter all the three numbers"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<"First number "<<num1<<" is Maximum"<<endl;
    }
    else
    {
        if(num2>num3 && num2>1)
        {
            cout<<"Second Number "<<num2<<" is Maximum"<<endl;
        }
        else
        {
            cout<<"Third number "<<num3<<" is maximum"<<endl;
        }
    }
    return 0;
}