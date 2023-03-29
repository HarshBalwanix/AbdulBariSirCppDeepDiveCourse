//display hello
/*
#include<iostream>
using namespace std;
void display()
{
    cout<<"Hello";
}
int main()
{
    display();
    return 0;
}
*/
/*
//Adding two float numbers
#include<iostream>
using namespace std;
float add(float x,float y)
{
    float z =  x+y;
    return z;
}  
int main()
{
    float a =10.5, b=12.5;
   float c=add(a,b);
   cout<<"Sum is "<<c<<endl;
    return 0;
}
*/
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