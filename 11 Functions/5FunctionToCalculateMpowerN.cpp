//Function to calculate m power n
#include<iostream>
#include<math.h>
using namespace std;
int power(int x,int y)
{
    int z = pow(x,y);
    return z;
}
int main()
{
    int m,n,result;
    cout<<"Enter m and n to get m raise to the power n "<<endl;
    cin>>m>>n;
    result=power(m,n);
    cout<<m<<" raise to the power "<<n<<" is "<<result;
    return 0;
}