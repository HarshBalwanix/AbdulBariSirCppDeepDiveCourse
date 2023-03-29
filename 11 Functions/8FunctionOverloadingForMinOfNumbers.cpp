//minimum of numbers
#include<iostream>
using namespace std;
int mini(int x, int y)
{
    if(x<y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}

int mini(int x, int y,int z)
{
    if(x<y && x<z)
    {
        return x;
    }
    else if (y<z)
    {
        return y;
    }
    else 
    {
        return z;
    }
}
int main()
{
    int a ,b,c,d,minimum;
cout<<"Enter numbers"<<endl;
cin>>a>>b;
// cin>>a>>b>>c;
minimum=mini(a,b);
// minimum=mini(a,b,c);
cout<<"Minimum is "<<minimum<<endl;
return 0;
}