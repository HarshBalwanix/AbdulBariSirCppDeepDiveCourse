//Write a program to check whether the number is odd or even
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    if(x==0)
    {
        cout<<"The number "<<x<<" is zero"<<endl;

    }
    else if(x%2!=0)    
    {
        cout<<"The number "<<x<<" is odd"<<endl;
    }
    else
    {
       cout<<"The number "<<x<<" is even"<<endl;
    }
     return 0;
}