/*
s.replace(from index, to(by counting uptill),"word")
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Programing";

    str.replace(3,4,"kk");
    cout<<str<<endl;
    return 0;
}
*/
/*
s.erase() //just like clear will empty the string
s.push_back('single character') // will add this character at last
s.pop_back() //just like backspace key, will remove the last character
s1.swap(s2) 
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Programing";
    string str2 = "Langauage";
    // str.erase();
    // str.push_back('h');
    // str.pop_back();
    str.swap(str2);
    cout<<str<<endl;
    cout<<str2<<endl;
    return 0;
}