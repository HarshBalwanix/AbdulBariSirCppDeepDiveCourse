/*
another function
for converting a string into a number
strtol(str1,NULL<base)   // read as string to long integer // base depends upon type of number just like hexadecimal or decimal or octal
strtof(str1,NULL)   // read as string to float 
*/
//Demo
/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="235";
    char s2[]="54.78";
    long int x=strtol(s1,NULL,10);
    float y=strtof(s2,NULL);
    cout<<x+10<<endl;
    cout<<y-5<<endl;
    return 0;
}
*/
/*
Another function
strtok(str1,"=;") // string token, this will tokenize the string
also known as key value pair
str1  x=10; y=20; z=35 \0

*/
//Demo
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="x=10;y=20;z=35";
    char *token =strtok(s1,"=;");
    while(token != NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }

    return 0;
}
