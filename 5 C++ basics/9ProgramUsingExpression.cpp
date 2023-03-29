//Program for area of triangle
//input process output are the three steps

// area = (b*h)/2

#include<iostream>
using namespace std;
int main(){
    float b,h, area;
    cout<<"enter breadth of triangle"<<endl;
    cin>>b;
    cout<<"enter height of triangle"<<endl;
    cin>>h;
    area = (b*h)/2;
    cout<<"Area of triangle is "<<area<<endl;

    return 0;
}