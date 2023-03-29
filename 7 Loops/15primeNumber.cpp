// check whether number is prime number or not
//using while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int i=2,n,fact=0;
    cout<<"Enter the number "<<endl;
    cin>>n;

    while(i<n)
    {
        if(n%i==0)
        {
          fact=i;  
        }
     i++;   
    }

    if(fact==0)
    {
        cout<<"Prime number"<<endl;
    }

    else
    {
        cout<<"Not prime number"<<endl;
    }

    return 0;
}
*/
//using do while loop
#include<iostream>
using namespace std;
int main()
{ 
    int i=2,n,fact=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    do
    {
        if(n%i==0)
        {
            fact=i;
        }
        i++;
    }
    while(i<n);

    if(fact==0)
    {
        cout<<"prime number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
        return 0;
}