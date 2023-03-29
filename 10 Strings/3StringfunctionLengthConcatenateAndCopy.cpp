   /*
   function in string.h/cstring
    to get length of a string
    strlen(str1) 

   */
  //demo of strlen
  /*
  #include<iostream>
  #include<cstring>
  using namespace std;
  int main()
  {
    char S[]="Hello";
    cout<<strlen(S)<<endl;
    char *p;
    cout<<"Enter string"<<endl;
    cin.getline(p,100);
    cout<<"Length of string is "<<strlen(p)<<endl;
    return 0;
  }
  */

  /*
    strcat(destination,source);
    destination good
    source morning
    after using this function
    goodmorning

    another function
    strncat(destination,source,length)
  */
/*
//strcat
 #include<iostream>
 #include<cstring>
 using namespace std;
 int main()
 {
     char s1[]="Good";
     char s2[]="Morning";
     strcat(s1,s2); //concatenation

     cout<<s1<<endl;
     return 0;
 }
 */
/*
//strncat
 #include<iostream>
 #include<cstring>
 using namespace std;
 int main()
 {
     char s1[]="Good";
     char s2[]="Morning";
     strncat(s1,s2,4); //concatenation upto some length

     cout<<s1<<endl;
     return 0;
 }
 */
/*
strcopy(destination,source)
strncpy(destination,source,length)
destination ____
source Hello
strcpy(destination,source)
strncpy(destination,source,length)
output hello in destination as well as source
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]={};
    char s2[10]="good";
    strcpy(s1,s2);
    cout<<s1<<endl;
    return 0;
}
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]={};
    char s2[10]="good";
    strncpy(s1,s2,2);
    cout<<s1<<endl;
    return 0;
}
