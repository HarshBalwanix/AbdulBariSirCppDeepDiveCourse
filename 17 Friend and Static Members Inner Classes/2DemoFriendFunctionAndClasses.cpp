
//Demo friend function
/*
#include<iostream>
using namespace std;
class Test
{
    int a;
    protected:
        int b;
    public:
        int c;
    friend void fun(); //declaration of friend fun to access private and protected members of class Test outside the class      
};
    void fun()
    {
        Test t;
        t.a=15;
        cout<<"a is "<<t.a<<endl;
        t.b=10;
        cout<<"b is "<<t.b<<endl;
        t.c=5;
        cout<<"c is "<<t.c<<endl;
    }
int main()
{
    fun();
    return 0;
}

*/
//Friend class 
#include<iostream>
using namespace std;
class Your;
class My
{
    int a;
    protected:
        int b;
        public:
        int c;
    friend Your;
};
class Your
{
    public:
    My m;
    void fun()
    {
    m.a=15;
    cout<<"a is "<<m.a<<endl;
    m.b=10;
    cout<<"b is "<<m.b<<endl;
    m.c=5;
    cout<<"c is "<<m.c<<endl;
    }
};
int main()
{
    Your y;
    y.fun();
    return 0;
}