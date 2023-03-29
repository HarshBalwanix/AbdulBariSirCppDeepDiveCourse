#include<iostream>
using namespace std;
int main()
{
    int sum=0,i;
    int A[]={2,5,7,14,12,23,16,18};
    for(i=0;i<8;i++)
    {
        sum=sum+A[i];
    }
    cout<<"Sum of all elements is "<<sum<<endl;

    return 0;
}