/*
#include<iostream>
using namespace std;
int main()
{
    int max=12,i;
    int A[]={12,7,45,32,56,78,25};
    for(i=0;i<7;i++)
    {
    if(max<A[i])
    {
        max=A[i];
    }
    }
    cout<<max;
    return 0;
}

*/

//or

#include<iostream>
using namespace std;
int main()
{
    int max=INT16_MIN,i;
    int A[]={12,7,45,32,56,78,25};
    for(i=0;i<7;i++)
    {
    if(max<A[i])
    {
        max=A[i];
    }
    }
    cout<<max;
    return 0;
}