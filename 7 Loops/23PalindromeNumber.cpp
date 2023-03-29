//Palindrome Number is a number which is same from both side for eg 1221 
#include<iostream>
using namespace std;
int main()
{
    int m,n,rev=0,r;
    cout<<"enter thr number"<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev<<endl;
    if(rev==m)
    {
        cout<<"Palindrome number"<<endl;

    }
    else
    {
        cout<<"Not palindrome number"<<endl;
    }
    return 0;
}