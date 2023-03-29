//Check whether the number is perfect or not 
//using while loop

/*
#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            sum=sum+i;
        }
    i++;
    
    }
    cout<<"Sum of factors is "<<sum<<endl;
    if(sum==2*n)
    {
        cout<<"It is a perfect number"<<endl;

    }
    else
    {
        cout<<"It is not a perfect number"<<endl;
    }
    return 0;
}

*/
//using do while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    do
    {
        if(n%i==0)
        {
            sum = sum+i;
            
        }
        i++;
    }
    while(i<=n);
    if(sum==2*n)
    {
        cout<<"Its a perfect number "<<endl;
    }
    else
    {
        cout<<"Its not a perfect number "<<endl;
    }
    cout<<"Sum of factors is "<<sum<<endl;
    return 0;
}
