//Demo 
#include<iostream>
using namespace std;
class MyException:exception
{
};
int division(int a,int b) throw(MyException) //not mandatory
{
    if(b==0)
    throw MyException();
    return a/b;
}
int main()
{
    int x=10,y=0,z;
    try
    {
        if(y==0)
            throw string("division by zero ");
        z= x/y; 
        cout<<z<<endl;
    }
    catch(string e)
    {
        cout<<"Error "<<endl<<e<<endl;
    }
    int q;
    try
    {
    q=division(10,0);
    cout<<q<<endl;
    }
    catch(MyException)
    {
        cout<<"Error code "<<endl;
    }
    return 0;
}