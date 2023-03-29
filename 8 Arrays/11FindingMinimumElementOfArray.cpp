#include<iostream>
using namespace std;
int main()
{
    int min=12,i=0;
    int A[]={12,7,45,32,56,78,25};
    while(i<7)
    {
        if(min>A[i])
        {
            min=A[i];
        }
        i++;
    }
    cout<<min<<endl;
    return 0;
}