/*
//Adding two float numbers
#include<iostream>
using namespace std;
float add(float x,float y)
{
    float z =  x+y;
    return z;
}  
int main()
{
    float a =10.5, b=12.5;
   float c=add(a,b);
   cout<<"Sum is "<<c<<endl;
    return 0;
}
*/
//Multiplication of two numbers
#include<iostream>
using namespace std;
float calc(float x,float y)
{
   float z=x*y;
   return z; 
}
int main()
{
    float a,b,c;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    c=calc(a,b);
    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<c;
    return 0;
}