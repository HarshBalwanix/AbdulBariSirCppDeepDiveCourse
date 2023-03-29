/*
Reading and Printing strings 
how to store name with single word
char s[20];
cout<<"Enter your name";
cin>>s; // this will store just first name

how to store name with multiple words
char s[50];
cout<<"Enter your name";
cin.get(s,50);
or 
cin.getline(s,50;)
*/
//Demonstration
/*
#include<iostream>
using namespace std;
int main()
{
    char s[50];
    cout<<"Enter your name "<<endl;
    cin>>s;
    // cin.get(s,100);
    cin.getline(s,50);
    cout<<"welcome "<<s<<endl;

    return 0;
}
*/
//get function when we use twice we need to use one more code in between to use this prprerly and that code is cin.ignore();
/*
#include<iostream>
using namespace std;
int main()
{
    char s[50];
    char s1[50];
    cout<<"Enter your name "<<endl;
    
    cin.get(s,100);
    // cin.getline(s,50);
    cout<<"welcome "<<s<<endl;

    cin.ignore();
    cout<<"Enter your name "<<endl;
    
    cin.get(s1,100);
    
    cout<<"welcome "<<s1<<endl;
    return 0;
}
*/
//but getine works perfectly fine

#include<iostream>
using namespace std;
int main()
{
    char s[50];
    char s1[50];
    cout<<"Enter your name "<<endl;
    
    // cin.get(s,100);
     cin.getline(s,50);
    cout<<"welcome "<<s<<endl;

    // cin.ignore();
    cout<<"Enter your name "<<endl;
    
    cin.getline(s1,50);
    
    cout<<"welcome "<<s1<<endl;
    return 0;
}