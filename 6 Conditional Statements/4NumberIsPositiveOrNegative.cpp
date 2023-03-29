#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number "<<endl;
    cin>>x;
    if(x>0)
    {
        cout<<"The number "<<x<<" is positive"<<endl;

    }
    else if(x<0)
    {
       cout<<"The number "<<x<<" is negative"<<endl; 
    }
    else
    {
      cout<<"The number "<<x<<" is zero"<<endl;  
    }
    
    return 0;
}