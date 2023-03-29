//Check whether the number is prime number or not
#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(i=2;i<n;++i)
    {
        if(n%i==0)
        {
            fact++; //using the concept that a prime number cannot have factors except 1 and itself which are already excluded
        }  
    }
    if(fact==0)
    {cout<<"Its a prime number"<<endl;}
    else  
        {cout<<"Its not a prime number "<<endl;}    

    return 0;

}