/* Write a program to calculate net salary. Program should take following as input
1 Basic salary 
2 percentage of allowance
3 percentage of deductions
Net salary = basic salary + basic salary *Percentage of allowances - basic salary*Percentage of deductions

*/
//Program to calculalte Net salary 
#include<iostream>
using namespace std;
int main(){
    float basic,allow,deduct,net;
    cout<<"Enter your basic salary "<<endl;
    cin>>basic;
    cout<<"Enter your percentage of allowance "<<endl;
    cin>>allow;
    cout<<"Enter your percentage of deductions "<<endl;
    cin>>deduct;
    net = (basic+((basic*allow)/100)-((basic*deduct)/100));
    cout<<"Your net salary  is "<<net<<endl;
    cout<<"Enjoy your day"<<endl;
    return 0;

}