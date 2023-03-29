/*
Manipulators
Common manipulator is endl  for "\n"

Other manipulators
 for integers
hex
oct 
dec
example 
cout<<hex<<163;
output will be a3;


Floating points
fixed
scientific
example
cout<<fixed<<125.731;
output will be 125.731;( if used scientfic then it will show in exponential form)


others 
set( )
left
right 
ws //widespace

example 
cout<<set(10)<<"Hello";
will be showed in 10 spaces
cout<<10<<ws<<20;
*/
//Demo
#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<hex<<163<<endl;
    cout<<oct<<163<<endl;
    cout<<dec<<163<<endl;
    cout<<fixed<<125.717<<endl;
    cout<<scientific<<125.717<<endl;
    // cout<<"Hello"<<ws<<"HI"<<endl; dont know the header file
    return 0;
}