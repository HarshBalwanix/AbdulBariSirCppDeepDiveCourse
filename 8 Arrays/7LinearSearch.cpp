#include<iostream>
using namespace std;
int main()
{
    int i, key;
    cout<<"Enter the number to search"<<endl;
    cin>>key;
    int A[]={6,11,25,8,15,7,12,20,9,14};
    for(i=0;i<10;i++)
    {
       if(A[i]==key)
       {
            {
                cout<<"present at index "<<i<<endl; 
                return 0;
            }
    }
    }
    cout<<"Not found"<<endl;
    return 0;
}