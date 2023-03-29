//Write a program to calculate volume of cylinder.
#include<iostream>
using namespace std;
int main(){
    float r,h,volume;
    cout<<"enter radius of cylinder"<<endl;
    cin>>r;
    cout<<"enter height of cylinder "<<endl;
    cin>>h;
    volume =  3.14*r*r*h;
    cout<<"Calculated volume of cylinder is "<<volume<<endl;
    return 0;
}