/* input as three marks 
then find total 
then find avg 
then give grades according to avg marks 
S if Avg>=90
A if Avg>=60
B if Avg <60
C if Avg <35
F if Avg <30
*/

#include<iostream>
using namespace std;
int main()
{    float avg,total;
    typedef float marks;
    marks m1,m2,m3;
    cout<<"Enter marks of maths"<<endl;
    cin>>m1;
     cout<<"Enter marks of physics"<<endl;
    cin>>m2;
     cout<<"Enter marks of chemistry"<<endl;
    cin>>m3;
    total = m1+m2+m3;
    cout<<"Your total marks is "<<total<<" out of 300"<<endl;
    avg=total/3;
    cout<<"Your average marks is "<<avg<<endl;
    if(avg>=90)
    cout<<"EXcellent Your Grade is : S"<<endl;
    else if(avg>=60 && avg<90)
    cout<<"Very Good!! Your Grade is : A "<<endl;
    else if(avg>=35 && avg<60)
    cout<<"Good!! Your Grade is : B "<<endl;
    else if(avg>=30 && avg<35)
    cout<<"Work Hard!! Your Grade is : C "<<endl;
    else 
    cout<<"Better luck Next time "<<endl;
    
    return 0;
}