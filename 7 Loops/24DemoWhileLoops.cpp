//using while loops 
//using while loops some examples

//Write number in words
#include<iostream>
using namespace std;
int main()
{
    int m,r,n,rev=0,num;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10 + r;

    }
    cout<<rev<<endl;
    while(rev>0)
    {
        m=rev%10;
        rev=rev/10;
        
        switch (m)
        {
        case 0 :
            cout<<"Zero ";
            break;
        case 1 :
            cout<<"One ";
            break;
        case 2 :
            cout<<"Two ";
            break;
        case 3 :
            cout<<"Three ";
            break;
        case 4 :
            cout<<"Four ";
            break;
        case 5 :
            cout<<"Five ";
            break;
        case 6 :
            cout<<"Six ";
            break;
        case 7 :
            cout<<"Seven ";
            break;
        case 8 :
            cout<<"Eight ";
            break;
        case 9 :
            cout<<"Eight ";
            break;
        
        }
    }
    return 0;
}