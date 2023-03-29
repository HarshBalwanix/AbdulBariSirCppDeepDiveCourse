#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5,i=7;
    if( a> b &&  ++i<b)
    {
        cout<<i<<endl;
    }
    else{
        ++i;
        cout<<i<<endl;
    }
    return 0;
}