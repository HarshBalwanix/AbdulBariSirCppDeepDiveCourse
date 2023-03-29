//Write a program to calculate simple interest.
#include<iostream>
using namespace std;
int main(){
    //Program to calculate simple intrest
    float P,I,r,t;
    cout<<"enter principal amount "<<endl;
    cin>>P;
    cout<<"enter Rate in percentage "<<endl;
    cin>>r;
    cout<<"enter time period in years "<<endl;
    cin>>t;
    I = (P*r*t)/100;
    cout<<"Calculated simple intrest is "<<I<<endl;


    return 0;
}