//Multiplication table

/*
#include<iostream>
using namespace std;
int main()
{
    int num,i=1,multi;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(;i<=10;++i)
    {
        multi=num*i;
        cout<<"Multplication table for "<<num<<" is "<<multi<<endl;
    }
    return 0;
}
*/
//or
/*
#include<iostream>
using namespace std;
int main()
{
    int num,i=1,multi;
    cout<<"Enter the number"<<endl;
    cin>>num;
    while(i<=10)
    {
        multi=num*i;
        cout<<"Multplication table for "<<num<<" is "<<multi<<endl;
        ++i;
    }
    return 0;
}
*/
//or
#include<iostream>
using namespace std;
int main()
{
    int num,i=1,multi;
    cout<<"Enter the number"<<endl;
    cin>>num;
    do
    {
        multi=num*i;
        cout<<num <<" x "<<i<<" = "<<multi<<endl;
        ++i;
    }
    while(i<=10);
    return 0;
}