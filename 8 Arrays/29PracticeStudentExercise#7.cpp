//Multiplication of two matrices

#include<iostream>
using namespace std;
int main()
{
    int c1,c2,r1,r2,i,j,k,mult;
cout<<"Enter rows and column for 1st matrix"<<endl;
cin>>r1>>c1;
cout<<"Enter rows and column for 2nd matrix"<<endl;
cin>>r2>>c2;
if(c1!=r2)
{
    cout<<"Not correct dimensions for multiplication "<<endl;
    return 0;
}
    int A[r1][c1];
    cout<<"Enter elements of Matrix A"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           cin>>A[i][j]; 
        }
    cout<<endl;
    }
    cout<<"Matrix A"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           cout<<A[i][j]<<" "; 
        }
    cout<<endl;
    }
    int B[r2][c2];
    cout<<"Enter elements of Matrix B"<<endl;
   for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
           cin>>B[i][j]; 
        }
    cout<<endl;
    }
    cout<<"Matrix B is "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
           cout<<B[i][j]<<" "; 
        }
    cout<<endl;
    }

    int C[r1][c2];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(k=0;k<c1;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"Matrix C is"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
           cout<<C[i][j]<<" "; 
        }
    cout<<endl;
    }
    return 0;
}
