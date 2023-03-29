//C++ Program to check the age of a user is eligible for voting or not.
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"you are eligible for voting"<<endl;
    }
    else{
        cout<<"You are not eligible "<<endl;
    }
    return 0;

}