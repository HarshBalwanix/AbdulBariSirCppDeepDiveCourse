#include<iostream>
using namespace std;
template<class T>
T max(T x,T y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
template<class T1>
T1 max(T1 x,T1 y,T1 z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    // float a,b,c;
    int a,b,c;
    cout<<"Enter the numbers "<<endl;
    // cin>>a>>b;
    cin>>a>>b>>c;
    cout<<"Maximum is "<<max(a,b,c)<<endl;
    return 0;
}