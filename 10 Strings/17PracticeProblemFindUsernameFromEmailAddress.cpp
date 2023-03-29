//Find username from email address
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the email address"<<endl;
    getline(cin,str);
    int i =(int) str.find('@');
    string sstr=str.substr(0,i);
    cout<<"Username of Email address is "<<sstr<<endl;
    return 0;
}