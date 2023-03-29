//Perfect number is the number whose sum of factors is equal to twice of itself 
//FOr eg 6 ...since factors of 6 are 1 2 3 6, sum of these factors is 12 and also 2*6=12 therefore its perfect number 

#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the number to check  whether it is perfect or not"<<endl;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    cout<<"sum of factors of "<<n<<" is "<<sum<<endl;
    if(sum==2*n)
    {
        cout<<"Perfect number "<<endl;
    }
    else
    {
        cout<<"Not a perfect number"<<endl;
    }
    return 0;
}