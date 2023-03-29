//Local and Global Variable 
#include<iostream>
using namespace std;
int g=5; //global variable
void fun()
{
    int a=10; //local
    a++;
    g++;
    cout<<a<<endl<<g<<endl;
    // int g=10; here this is another local variable g which will not be accessed outside 
    // g++;
}
int main()
{   
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    return 0;
}