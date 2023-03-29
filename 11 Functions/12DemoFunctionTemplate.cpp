//Function Template
#include<iostream>
using namespace std;
template<class T>
T maxi(T x,T y)
{
    return x>y?x:y;
}
int main()
{
    cout<<maxi(10,12)<<endl;
    cout<<maxi(2.3,1.4)<<endl;
    cout<<maxi(2.3f,5.6f)<<endl;
    // cout<<maxi(2.3f,5.6)<<endl; //Datatype of both the arguments should be same 

    return 0;
}


