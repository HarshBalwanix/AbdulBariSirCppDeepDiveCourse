/*
Write a program to take integer input from user and that integer is reversed and if that reverse integer is equal to original inter then it is palindrome or else it is not 
*/
// I have already done this one with while loop so doing wuth for loop 
#include<iostream>
using namespace std;
int main()
{
    int r,n,rev=0,m;
    cout<<"Enter the integer"<<endl;
    cin>>n;
    m=n;
    for(n;n>0;n=n/10)
    {
        r=n%10;
        rev=rev*10+r;
    }
    cout<<rev<<endl;
    if(rev==m)
    {
        cout<<"this is palindrome "<<endl;
    }
    else
    {
        cout<<"This is not palindrome"<<endl;
    }
    return 0;
}