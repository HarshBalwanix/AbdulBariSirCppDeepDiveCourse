// sum of two numbers
/*
#include<iostream>
using namespace std;
template<class T>
T add(T x, T y =0 , T z=0)
{
    return x+y+z;
}
int main()
{
   
    cout<<"Sum is "<<add(10,2,3)<<endl;
    cout<<"Sum is "<<add(10.6,2.3,3.3)<<endl;
    cout<<"Sum is "<<add(10.6,2.3)<<endl;
    cout<<"Sum is "<<add(10,2)<<endl;
    cout<<"Sum is "<<add(10)<<endl;
    return 0;
}
*/
//Max of Numbers
#include<iostream>
using namespace std;
template<class T>
T maxi(T x, T y=0, T z=0)
{
    return x>y && x>z?x:y>z?y:z;
}
int main()
{
    // cout<<maxi()<<endl; // dont know why not working
    cout<<maxi(10)<<endl;
    cout<<maxi(10,13)<<endl;
    cout<<maxi(10,13,15)<<endl;
    cout<<maxi(10.2,13.3,15.4)<<endl;
    cout<<maxi(10.2,13.3)<<endl;
    cout<<maxi(10.2)<<endl;
    return 0;
}