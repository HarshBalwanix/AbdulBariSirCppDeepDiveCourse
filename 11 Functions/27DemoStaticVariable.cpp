#include<iostream>
using namespace std;
void fun()
{
    static int v=0; // v is static variable  
    int a=5; // a is not static variable 
    v++;
    a++;
    cout<<a<<" "<<v<<endl;
}
int main()
{
    fun(); // a is not static and it is declared every time and v is static and it is not declared every time
    fun();
    fun();
    return 0;
}