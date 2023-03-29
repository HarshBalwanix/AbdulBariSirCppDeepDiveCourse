#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter first number"<<endl;
    cin>>x;
    cout<<"Enter second number"<<endl;
    cin>>y;
    if(x>y)
    {
       
     cout<<"The larger number is "<<x<<endl;

     
    }

    else if(x<y)
             {
               cout<<"larger number is "<<y<<endl;
              }

    else
    {
    cout<<"Both numbers are equal"<<endl;
    }

    return 0;
}
