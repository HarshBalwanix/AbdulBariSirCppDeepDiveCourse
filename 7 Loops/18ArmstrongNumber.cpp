//Check whether the number is Armstrong Number or not
/* Armstrong number is a number whose sum of cubes of digits of number is equal to the number itself  
for eg 153 as 1^3 +5^3 +3^3 = 1+125+27=153
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,sum=0,m;
    cout<<"Enter the number "<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
    //    sum = sum + (r*r*r);
       sum += pow(r,3);  //Compiler ka error h 153 pr
    }

    cout<<sum<<endl;
    if(sum==m)
    {
        cout<<"Its a Armstrong number"<<endl;
    }
    else
    {
        cout<<"Its not a Armstrong number "<<endl;
    }
    return 0;
}
*/
// using for loop 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,sum=0,m;
    cout<<"Enter the number"<<endl;
    cin>>n;
    m=n;
    for(n;n>0;)
    {
       r=n%10;
        n=n/10;
    //    sum = sum + (r*r*r);
       sum += pow(r,3);  //Compiler ka error h 153 pr
    }
    cout<<sum<<endl;
    
    if(sum==m)
    {
        cout<<"Its a armstrong number"<<endl;
    }
    else
    {
        cout<<"Its not a armstrong number"<<endl;
    }

    return 0;
}

/*
//do while loop 
#include<iostream>
using namespace std;
int main()
{
    int r=0,n,sum=0,m;
    cout<<"Enter the number "<<endl;
    cin>>n;
    m=n;
    do
    {
        r=n%10;
        n=n/10;
        // cout<<r<<endl;
        sum = sum+(r*r*r);
    }
    while(n>0);
cout<<sum<<endl;
    if(sum==m)
    {
        cout<<"Its a armstrong number"<<endl;
    }
    else
    {
        cout<<"Its not a armstrong number"<<endl;
    }

    return 0;
}
*/