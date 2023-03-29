//Find factors of a number

//using while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            
        }
        ++i;
    }
    return 0;
}
*/
//using do while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    do
    {
       if(n%i==0)
       {
         cout<<i<<endl;
       }
     i++;  
    }
    while(i<=n);
    
    return 0;
}