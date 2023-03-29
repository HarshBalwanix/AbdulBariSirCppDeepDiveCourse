//Find the length of the string
//using for loop 
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int count=0;
    cout<<"Enter the string"<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"length of the string is "<<count<<endl;
    return 0;
}
*/

// using iterator
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int count=0;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<str<<endl;
    string::iterator it;
    for( it=str.begin();it!=str.end();it++)
    {
        count++;
    }
    cout<<"length of the string is "<<count<<endl;
    return 0;
}