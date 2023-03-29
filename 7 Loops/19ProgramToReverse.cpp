                                   //Reverse of a number 
                                   //Concept 1

//Program to reverse a number
//using while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int r=0,n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        cout<<r;
        n=n/10;

    }
    return 0;
}
*/
/*
//using for loop
#include<iostream>
using namespace std;
int main()
{
    int r=0,n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(n;n>0;n=n/10)
    {
        r=n%10;
        cout<<r;
    }
    return 0;
}
*/
//using do while
/*
#include<iostream>
using namespace std;
int main()
{
    int r=0,n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    do
    {
        r=n%10;
        cout<<r;
        n=n/10;
    } while (n>0);
    return 0;
}
*/

                              //Concept 2

/*153
ox10+3=3
3x10+5=35
35x10+1=351
rev=rev*10 + r
*/
//while loop
/*
#include<iostream>
using namespace std;
int main()
{
int n,r,rev=0;
cout<<"enter the number"<<endl;
cin>>n;
while(n>0)
{
    r=n%10;
    n=n/10;
    rev=rev*10 +r;
}
cout<<rev<<endl;
return 0;
}
*/
/*
//using for loop
#include<iostream>
using namespace std;
int main()
{
    int r=0,n,rev=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(n;n>0;n=n/10)
    {
        r=n%10;
        rev=rev*10 +r;
    }
    cout<<rev<<endl;
    return 0;
}
*/
//using do while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int r=0,n,rev=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    do
    {
        r=n%10;
        n=n/10;
        rev=rev*10 +r;
    }while(n>0);
    cout<<rev<<endl;
    return 0;
}
*/
