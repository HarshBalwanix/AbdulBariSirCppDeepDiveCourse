/*
This will represent matrix type arrays 
int A[2][3]={{2,3},{6,9,15}}; //automatically 3rd value will be zero
to print 
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}
Operations of Matrices

*/
// Adding two matrices 
#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    cout<<"Enter elements of Matrix A"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>A[i][j]; 
        }
    cout<<endl;
    }
    cout<<"Matrix A"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<A[i][j]<<" "; 
        }
    cout<<endl;
    }
    int B[2][3];
    cout<<"Enter elements of Matrix B"<<endl;
   for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>B[i][j]; 
        }
    cout<<endl;
    }
    cout<<"Matrix B is "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<B[i][j]<<" "; 
        }
    cout<<endl;
    }
    int C[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           C[i][j]=A[i][j]+B[i][j]; 
        }
    cout<<endl;
    }
    cout<<"Matrix C is"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<C[i][j]<<" "; 
        }
    cout<<endl;
    }
    return 0;
}