//Demo Exception Handling
#include<iostream>
using namespace std;
int main()
{
    int a=10,b;
    
    cout<<"Enter b "<<endl;
    cin>>b;
    try
    {
        if(b==0)
        throw 101;
        
        float c= a/b;
        cout<<c<<endl;
        
    }
    catch(int d)
    {
        cout<<"Division by zero"<<"\nError code "<<d<<endl;
        return 0;
    }
    cout<<"Thanks for using "<<endl;
    return 0;
}