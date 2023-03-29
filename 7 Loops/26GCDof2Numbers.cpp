#include<iostream>
using namespace std;
int main()
{
    int m,n,x,y;
    cout<<"Enter both the numbers "<<endl;
    cin>>n>>m;
    x=m;
    y=n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else if(m<n)
        {
            n-=m;
        }
    }
    cout<<"GCD of "<<x<<" and "<<y<<" is "<<m<<endl;
    return 0;
}