#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    int **pp;
    pp=&p;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<**pp<<endl;
    cout<<*(&a)<<endl;
    return 0;
}