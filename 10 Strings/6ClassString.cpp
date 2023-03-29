/*
Class String 
#include<string>
string str;
getline(cin,str);
cout<<str;
*/
//Demo
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    cout<<"Enter a string"<<endl;
    getline(cin,str1);
    cout<<str1<<endl;
    return 0;
}