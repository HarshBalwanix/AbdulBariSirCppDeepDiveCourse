//Write a program for linear search using function
#include<iostream>
using namespace std;
int Search(int A[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i];
        if(key==A[i])
        return i;
    }
    return 0;
} 
int main()
{   int key;

    int A[]={1,2,3,4,5};
   
  
   cout<<"Enter key"<<endl;
   cin>>key;
    cout<<"\nHere is the key "<<Search(A,5,key)<<endl;
    return 0;
}