
/*
iterators are used to access all characters of string it is used as like pointers 

string::iterator //forward
begin()
end()

*/
//demonstration of iterator forward
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="toDay7";
    string::iterator i;
    for(i=str.begin();i!=str.end();i++)
    {
        cout<<*i<<endl;

    }
    cout<<endl;
    //Converting it to upper case letters  
    for(i=str.begin();i!=str.end();i++)
        if(*i>=97 && *i<=122)
        {
            *i =*i-32;
        }
        cout<<*i;

    }

    return 0;
}
*/
/*p,
//we can do this same with just using for loop 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="toDay7";
    
    for( int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];

    }
    cout<<endl; 
    //Converting it to upper case letters  
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
       {
       str[i] =str[i]-32;
       }

    }
    cout<<str;

    return 0;
}
*/

//using reverse iterator
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="today";
    string::reverse_iterator i;
    for(i=str.rbegin();i!=str.rend();i++)
    {
        cout<<*i<<endl;

    }
    cout<<endl;
    //Converting it to upper case letters  
    for(i=str.rbegin();i!=str.rend();i++)
    {
        *i =*i-32;
        cout<<*i;

    }

    return 0;
}