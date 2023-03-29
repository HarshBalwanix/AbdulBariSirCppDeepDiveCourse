//using for each loop
/*
#include<iostream>
using namespace std;
int main()
{
        int sum =0;
    int A[7] = {4,8,6,9,5,2,7};
    for(int x :A)
    {
        cout<<x<<endl;
        sum=sum+x;
    }
    cout<<"sum of all these elements is "<<sum<<endl;
    return 0;
}
*/
//using for loop
#include<iostream>
using namespace std;
int main()
{
        int sum =0;
    int A[7] = {4,8,6,9,5,2,7};
    for(int i=0;i<7;i++)
    {
        cout<<A[i]<<endl;
        sum=sum+A[i];
    }
    cout<<"sum of all these elements is "<<sum<<endl;
    return 0;
}