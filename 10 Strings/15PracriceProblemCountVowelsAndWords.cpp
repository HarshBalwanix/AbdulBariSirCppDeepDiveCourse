//Count vowels and words in a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int words=0, vowels=0 , space=0,consonant=0;
    string str="how Many      wOrds7";
    for(int i=0;str[i]!='\0';i++)
    {  
         if(str[i]=='a'|| str[i]=='e' || str[i]=='i'||  str[i]=='o' || str[i]=='u' || str[i]=='A' ||  str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
        {
        vowels++;
        }
        else if(str[i]==' ' && str[i+1]!=' ')
        {   
            space++;
            
        }
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            consonant++;
        }
        words++;
    }
    cout<<"Vowels are "<<vowels<<endl;
    cout<<"Consonants are "<<consonant<<endl;
   
    cout<<"Words are "<<space +1<<endl; 

    return 0;
}
