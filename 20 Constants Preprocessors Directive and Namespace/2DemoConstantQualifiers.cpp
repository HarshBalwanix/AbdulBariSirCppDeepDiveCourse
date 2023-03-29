/*
// Constant int 
#include<iostream>
using namespace std;
int main()
{
    const int x=10;
    // x++; cant perform 
    cout<<x<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
     int x=10;
     const int *ptr =&x;
      //++*ptr; //will not work as pointer is constant 
      x++;//this will work 
      cout<<*ptr<<endl; 
    cout<<x<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
     int x=10;
     const int *const ptr =&x;
      //++*ptr; //will not work as pointer is constant 
      x++;//this will work 
      int y =20;
    //   *ptr=&y; //cant assign now as pointer is constant and assigned to x already
      cout<<*ptr<<endl; 
    cout<<x<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Demo
{
    public:
        int x=10;
        int y=20;

        void display() const
        {
           // x++; //cant modify
            cout<<x<<" "<<y<<endl;
        }
};
int main()
{
    Demo d;
    d.display();
    return 0;
}
*/
//call by reference
#include<iostream>
using namespace std;
void fun(const int &a,int &b) 
{
   // a++; //wiill not work
    b++;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    int x=10;
    int y =20;
    fun(x,y);
    return 0;
}
