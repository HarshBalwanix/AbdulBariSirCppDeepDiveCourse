//Multiplication table
// using While
/* 
#include<iostream>
using namespace std;
int main()
{
    int i=1,n,multi=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(i<=10)
    {
        multi =i*n;
        cout<<n<<" x "<<i<<" = "<<multi<<endl;
        i++;
    }
    
    return 0;
}
*/
//do while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int i=1,n,multi=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    do
    {
        multi = n*i;
        cout<<n<<" x "<<i<<" = "<<multi<<endl;
        ++i;
    }
    while(i<=10);
    return 0;
}
*/

//For loop
#include<iostream>
using namespace std;
int main()
{
     int i,n,multi;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    {
         multi = n*i;
        cout<<n<<" x "<<i<<" = "<<multi<<endl;
    }
    return 0;
}
