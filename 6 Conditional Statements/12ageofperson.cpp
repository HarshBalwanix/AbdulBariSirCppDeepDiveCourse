//Calculate age from date of birth in years only
#include<iostream> 
using namespace std;
int main()
{   
    int birth,diff;
    cout<<"Enter your birth year"<<endl;
    cin>>birth;
    diff = 2022-birth;
    cout<<"Your age is "<<diff<<" years"<<endl;
    return 0;
}