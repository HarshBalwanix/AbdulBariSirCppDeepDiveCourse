//Function overloading for sum of numbers
#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
float add(float x,float y,float z)
{
    return x+y+z;
}
int main()
{
    // float a,b,c;
    int a,b,c;
    cout<<"Enter numbers"<<endl;
    cin>>a>>b;
    c=add(a,b);
    cout<<"Sum is "<<c<<endl;
    return 0;
}