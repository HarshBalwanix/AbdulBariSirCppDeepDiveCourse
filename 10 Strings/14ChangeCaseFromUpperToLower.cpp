//upper to lower case
/*
//using for loop
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="HARSH";
    for(int i=0;str[i]!='\0';i++)
    {
       if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        cout<<str[i];
    }
    cout<<endl;
    cout<<"Lower case is "<<str<<endl;
    return 0;
}
*/
/*
//Using iterator
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="HarSH";
    string::iterator it;
    for( it=str.begin();it!=str.end();it++)
    {
        if(*it>=65 && *it<=90)
       {*it=*it+32;
       }
       cout<<*it;
    }
    cout<<endl;
    cout<<"Lower case is "<<str<<endl;
    return 0;
}
*/