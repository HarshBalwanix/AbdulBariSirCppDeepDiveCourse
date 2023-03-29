/*
Class string
s.append("bye") //will add another content in the string at the end and if capacity is less then the length then it will automatically increase the capacity
s.insert(3,"kk") // will insert content at exactly 3rd place
s.replace()

*/
//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="hello";
    // str.append(" World");   //appending
    // str.insert(4,"ooo");    //inserting
     str.insert(3,"Apple",2);   //will take 2 letters from apple
   
    cout<<str<<endl;
    return 0;
}