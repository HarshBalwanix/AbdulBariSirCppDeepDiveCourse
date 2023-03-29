/*
class strings 
s.length() // will give length of string
s.size() // same as length
s.capacity() //will give capacity of string
s.resize(30) // to increase capacity of string
s.max_size() //possible max size for string based on compiler
s.clear() //clear the content of string
s.empty() //will check if string is empty or not

*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="hello";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    str.resize(50);
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;
    str.clear();
    cout<<str.length()<<endl;
    if(str.empty())
    {
        cout<<"String is Empty"<<endl;
    }
    return 0;
}