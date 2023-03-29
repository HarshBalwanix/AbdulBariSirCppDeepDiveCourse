#include<iostream>
using namespace std;

template<class T>
T maxim(T x,T y,T z)
{
    
    return x>y && x>z?x:y>z?y:z;
}

int main()
{
    int a,b,c;
    cout<<"Enter three integers"<<endl;
    cin>>a>>b>>c;
    cout<<"Maximum is "<<maxim<int>(a,b,c)<<endl;

    float d,e,f;
    cout<<"Enter three numbers"<<endl;
    cin>>d>>e>>f;
    cout<<"Maximum is "<<maxim<float>(d,e,f)<<endl;
    
    return 0;
}