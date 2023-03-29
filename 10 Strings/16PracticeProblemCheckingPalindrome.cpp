#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
   cout<<"Enter the string"<<endl;
    getline(cin,str1);
    //To get all letters in lower case
    for( int i=0;str1[i]!='\0';i++)
    {
    if  (str1[i]>='A' && str1[i]<='Z')
    {
        str1[i]=str1[i]+32;
    }
    }
    // cout<<str1<<endl;
    //Reversing the string and comparing with original one
    string rev;
    int len = (int)str1.length();
    rev.resize(len);
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=str1[j];
    }
    rev[len]='\0';
    if(str1.compare(rev)==0)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }
    return 0;
} //check for condition