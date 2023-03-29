#include<iostream>
using namespace std;
int main()
{
    int max=4;
    int A[]={4,8,6,9,5,2,7};
    for(int x : A)
    {
        if(x>max)
        {
            // cout<<x<<endl;
            max=x;
        }
        
    }
    cout<<"Biggest element in array is "<<max;
    return 0;
}