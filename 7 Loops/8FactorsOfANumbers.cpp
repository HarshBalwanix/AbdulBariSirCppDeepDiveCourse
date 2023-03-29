//Factor of a number 
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter the number to get it's factorial"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        cout<<"factor is "<<i<<endl;
        sum = sum +i;
        }
    }  
        cout<<"sum of all the factors is "<<sum<<endl;
    return 0;
}