//scope resolution 
#include<iostream>
using namespace std;
int x=10;
int main()
{
    int x=20;
    {                   //block level scope
        int x=30;
        cout<<x<<endl;
    }
        cout<<x<<endl;
        cout<<::x<<endl; //scope resolution x for global variable
        return 0;
}