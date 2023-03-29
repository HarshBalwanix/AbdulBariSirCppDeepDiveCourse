/*
Local and Global Variables
Global variable is accessible everywhere in the program
local variable is accessible wherever it is defined
int g=0; // g is global variable
void fun()
{
    int a=5; // a is local variable
    g=g+a; // g is global variable and is accessible in void fun  
    cout<<g;
}
void main()
{
    g=15;
    fun();
    g++;
    cout<<g;
}
*/