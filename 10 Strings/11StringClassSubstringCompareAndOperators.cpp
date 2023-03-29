/*
s.substr(starting index,number of elements) //will take out a substring and will create a new string 
s.compare(str) // same as strcmp() and will return a integer  -ve if smaller ,0 if equal, +ve if greater

*/
/*
//substring and compare
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="Programming";
    string str2="Hello";
    string str1="Hello";
    string str3="hello";
    cout<<str.substr(3)<<endl;
    cout<<str.substr(3,4)<<endl;
    cout<<str1.compare(str2)<<endl;
    cout<<str.compare(str2)<<endl;
    cout<<str2.compare(str3)<<endl;
    return 0;
}
*/
/*
Operators decided upon string class
at(index) // will give the letter at given index
str.at(4) //will give same output as str[4]
front() //will give first letter of string as output 
back() // will give last letter of string as output
[]
+ // two combine two strings
= // two assign content of another string to the particular string
*/
//Demonstration
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Holiday";
    string str1="Hello";
    string str2=" World";
    cout<<str.at(4)<<endl;
    cout<<str[4]<<endl;
    cout<<str1+str2<<endl;
    str1+= str2+"! How are you all?";
    cout<<str1<<endl;
    str1=str2;
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}