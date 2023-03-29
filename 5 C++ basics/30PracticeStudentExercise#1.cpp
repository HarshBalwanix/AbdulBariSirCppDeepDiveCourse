//Write a program to calculate Area of Circle and take radius as input
#include<iostream>
using namespace std;
int main(){
    float r,area;
    cout<<"Enter radius of circle "<<endl;
    cin>>r;
    area = 3.14*r*r;
    cout<<"Required area of circle is "<<area<<endl;
    return 0;
}