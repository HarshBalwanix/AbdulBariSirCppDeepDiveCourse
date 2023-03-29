#include<iostream>
using namespace std;
int main(){
    float  u,v,a,s;
    cout<<"Enter initial speed,final speed and acceleration "<<endl;
    cin>>u>>v>>a;
    s = (v*v+ u*u)/(2*a);
    cout<<"Distance is "<<s<<" metres"<<endl;
    return 0;
}