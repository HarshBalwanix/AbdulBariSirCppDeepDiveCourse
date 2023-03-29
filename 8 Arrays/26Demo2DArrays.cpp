//using for loop 
/*
#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={{2,4,6},{3,5,7}}; // can also be written as {2,4,6,3,5,7}; it will automatically be adjusted  
    for(int i=0;i<2;i++)  //rows
    {
        for(int j=0;j<3;j++) //columns
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//using for each Loop
#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={2,4,6,3,5};
    for(auto& x : A)    //& refers rows
    {
        for(auto& y:x)  //refers x
        {
            cout<<y<<" ";
        } 
        cout<<endl;
    }
    return 0;
}