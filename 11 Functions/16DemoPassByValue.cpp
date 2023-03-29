//Demo pass by values
#include<iostream>
using namespace std;
int swap(int x, int y)
{
    cout<<x<<" "<<y<<endl;
    int temp;
    temp =x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;
}
int main()
{
    int a=10, b=20;
    swap(a,b);
    cout<<a<<" "<<b<<endl; // a and be will be unchanged 
    return 0;
}