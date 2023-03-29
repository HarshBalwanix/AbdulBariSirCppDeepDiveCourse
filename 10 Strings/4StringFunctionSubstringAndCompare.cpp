/*
another function
strstr(main,sub);
main programming
sub gram
*/
//demo
/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Programing";
    char s2[20]="gram";
    char s3[]="r";
    cout<<strstr(s1,s2)<<endl;
    cout<<strstr(s1,s3)<<endl;
    return 0;
}
*/

/*
Another function strchr(main,char);//for finding occurance of a char from LHS     &&     strrchr(main,char); //occurance of char from RHS
main Programing
*/
//Demo
/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{   
    char s1[]="Programing";
    cout<<strchr(s1,'g')<<endl;
    cout<<strrchr(s1,'g')<<endl;
    return 0;
}

*/

/*
Another function 
string compare
returns -ve o or +ve
will see alphabetical order
/////////////////////////////////////////////////////////////NOTE////////////////////////////////////////////////////////
Capital letter comes before the small letters 
/////////////////////////////////////////////////////////////NOTE////////////////////////////////////////////////////////
for equal it will return 0
for coming first it will return -ve
for coming after it will return +ve
strcmp(str1,str2)
str1 Hello;
str2 Hello;
output 0;
or 
str1 minor;
str2 elder;
for str1
output +ve;
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char str1[]="hello";
    // char str2[]="Hello";
    // char str2[]="hello";
    char str2[]="ice";
    cout<<strcmp(str1,str2)<<endl;
    return 0;
}
