//Write a program to check whether the divisor is zero or not and if it is zero print division by zero is invalid else do the division and give the result
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter divident and divisor"<<endl;
    cin>>x>>y;
    if(y==0)
    {
        cout<<"division by zero is invalid"<<endl;
    }
    else
    {
        z = x/y;
        cout<<" Integer division is "<<z<<endl;
        
    }

    cout<<"Thank you for trusting us"<<endl;
    
    return 0;

}