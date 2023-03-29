#include<iostream>
using namespace std;
int division(int x,int y)
{
    if(y==0)
    {
        throw 1;
    }
    return x/y;
}
int main()
{
    int c;
    try{
    c=division(10,0);
    cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero is not possible "<<endl<<"Error Code "<<e<<endl;
        return 0;
    }
cout<<"THANK YOU"<<endl;
    return 0;
}