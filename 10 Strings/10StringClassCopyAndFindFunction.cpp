/*
s.copy( char des[])  //copies string into a character array
s.find(str) or chr //finds index for char or string from LHS(if char or string is not present it will return the either -1 or max possible value which is out of range of the string)
s.rfind(str) //finds index for char or string from RHS(if char or string is not present it will return the either -1 or max possible value which is out of range of the string)
s.find_first_of(char) // finds first occurance of char(only for characters)
s.find_first_of(char,index) // starts searching from the index and finds first char
s.find_last_of(char) //  finds last occurance of char
s.find_last_of(char,index) // starts searching from the index and finds last occurance of char
*/
/*
//s.copy
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{   
    string s ="welcome";
    char str[20];
    // s.copy(str,s.length());
    s.copy(str,3);
    str[3]='\0';
    cout<<str<<endl;
    return 0;

}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{   
    string s ="How are you";
    
   
    cout<<s.find("are")<<endl;
    cout<<s.find('o')<<endl;
    cout<<s.rfind('o')<<endl;
    cout<<s.rfind('k')<<endl;
    return 0;

}
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{   
    string s ="Hello world";
    cout<<s.find_first_of('l')<<endl;
    cout<<s.find_first_of('le')<<endl; //will give output whichever out of l or e is found
    cout<<s.find_first_of('l',4)<<endl;
    cout<<s.find_last_of('l')<<endl;
    return 0;

}