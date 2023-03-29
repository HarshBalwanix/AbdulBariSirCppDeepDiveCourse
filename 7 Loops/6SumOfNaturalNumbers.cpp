//Sum of natural numbers
//for  loop
/*
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;
    cout<<"Enter the term "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        cout<<"sum is "<<sum<<endl;
    }
    return 0;
}
*/
/*
//while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"Enter the term "<<endl;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        cout<<"sum is "<<sum<<endl;
        ++i;
    }
    return 0;
}
*/
//do while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"Enter the term "<<endl;
    cin>>n;
    do
    {
        sum=sum+i;
        cout<<"sum is "<<sum<<endl;
        ++i;
    }
    while(i<=n);
    return 0;
}