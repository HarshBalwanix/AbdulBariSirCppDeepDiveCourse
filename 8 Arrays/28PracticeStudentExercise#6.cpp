//Write a program to calculate average of all elements of array
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0.0;
    // float average;
    cout<<"Enter number of elements of array"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter all elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Elements entered in array are ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
        sum+=A[i];
    }
    cout<<"\nsum of all elements of array is "<<sum<<endl;
    float average=(float)sum/n;
    cout<<"Average of all elements of array is "<<average<<endl;
    return 0;
}