/*

#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<p+2<<endl;
    cout<<*(p+2)<<endl;

    return 0;
} 
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A;
    cout<<p<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    cout<<p<<endl;
    return 0;
} 
*/
#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A, *q=&A[4];

    cout<<p-q<<endl;
    cout<<q-p<<endl;
   
    
    return 0;
} 