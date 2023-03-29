/*
//Maximum of three numbers
#include<iostream>
using namespace std;
int maxim(int x,int y,int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
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
    int a,b,c,maximum;
    cout<<"Enter the three numbers "<<endl;
    cin>>a>>b>>c;
    maximum=maxim(a,b,c);
    cout<<"Maximum of "<<a<<","<<b<<","<<c<<" is "<<maximum<<endl;
    return 0;
}
*/
//Minimum of three numbers
#include<iostream>
using namespace std;
int mini(int x,int y,int z)
{
    if(x<y && x<z)
    {
        return x;
    }
    else if(y<z)
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
    int a,b,c,minimum;
    cout<<"Enter three numbers "<<endl;
    cin>>a>>b>>c;
    minimum=mini(a,b,c);
    cout<<"Minimum of "<<a<<","<<b<<","<<c<<" is "<<minimum<<endl;
    return 0;
}