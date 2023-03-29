#include<iostream>
using namespace std;
int main()
{
    int pos=0,neg=0,zero=0;
    int A[]={12,7,45,32,56,78,25,-34,-21,-36,-90,-78,-54,0};
    for(int x : A)
    {
        if(x>0)
        {
            pos++;
        }
        else if(x<0)
        {
            neg++;
        }
        else{
            zero++;
        }
    }
cout<<"Positive elements in this Array is "<<pos;
cout<<"\nNegative elements in this Array is "<<neg;
cout<<"\nZero is "<<zero;
 return 0;
}