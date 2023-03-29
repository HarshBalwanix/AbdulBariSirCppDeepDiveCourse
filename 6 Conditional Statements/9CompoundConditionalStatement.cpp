// out of 24 hours, develop a program to check whether the time is working hour or leisure hour
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the current time on the scale of 0-23"<<endl;
    cin>>x;
    if(x>=9 & x<=18)
    {
        cout<<"Its working hour"<<endl;

    }
    else if(x<0 || x>23)
    {
        cout<<"Not valid time"<<endl;
    }
    else
    {
        cout<<"Its leisure hour"<<endl;
    }
    return 0;
}