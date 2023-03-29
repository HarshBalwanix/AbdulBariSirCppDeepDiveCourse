/*
Strings
it is a collection of characters
we can have more than 2000 characters in strings
two methods of representing strings
1 Using char Array
2 class string
for string " " are used 
for char ' ' are used 


Using char Array
char x ='A';
char S[]="Hello";
is stores 'H' ,'e' ,'l' ,'l' ,'o' ,'\0' // here this \0 is null character or string delimiter 
char *S="Hello"; // in heap memory

*/
//Demo on strings
#include<iostream>
using namespace std;
int main()
{
    char S[]= "Hello";
    cout<<S<<endl;
    char B[]={'H','e','l','l','o','\0','p'}; // it will not display anything after this \0
    cout<<B<<endl;
    char A[]={65,66,67,68,0,69}; // it will not display anything after this 0 as 0 represents null char 
    cout<<A<<endl;
    char *X="hello"; //using pointer
    cout<<X<<endl;
    string D="hellooo"; // using string class 
    cout<<D<<endl;

    return 0;
}