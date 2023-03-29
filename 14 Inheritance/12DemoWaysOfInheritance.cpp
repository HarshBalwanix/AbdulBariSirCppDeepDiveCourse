//Demo of Ways of inheritance
//Inherting publicaly
/*
#include<iostream>
using namespace std;
class Parent
{
    private: int a;
    protected: int b;
    public: int c;
            void funParent()
            {
                a=10;
                b=5;
                c=15;
            }
};
class Child:public Parent //can access all the members except private ones
{
    public:
        void funChild()
        {
           // a=10; not accessible
            b=5;
            c=15;
        }
    
};
class GrandChild:public Child //can access all the members except private ones
{
    public:
        void funGrandChild()
        {
            // a=10; not accessible
            b=5;
            c=15;
        }
};
int main()
{   
    Child c;
    // c.a=10; cannot access as it is private 
    // c.b=5; cannot access as it is protected
    c.c=15;
    return 0;
}

*/

/*
//Protectedly Inheriting from parent class
#include<iostream>
using namespace std;
class Parent
{
    private: int a;
    protected: int b;
    public: int c;
            void funParent()
            {
                a=10;
                b=5;
                c=15;
            }
};
class Child:protected Parent //can access all the members except private ones
{   
    protected: // everything is here

    public:
        void funChild()
        {
           // a=10; not accessible
            b=5;
            c=15;
        }
    
};
class GrandChild:public Child //can access all the members except private ones
{
    public:
        void funGrandChild()
        {
            // a=10; not accessible
            b=5;
            c=15;
        }
};
int main()
{   
    Child c;
    // c.a=10; cannot access as it is private 
    // c.b=5; cannot access as it is protected
    // c.c=15; cannot access as it is protected
    return 0;
}
*/

//Inheriting privately
#include<iostream>
using namespace std;
class Parent
{
    private: int a;
    protected: int b;
    public: int c;
            void funParent()
            {
                a=10;
                b=5;
                c=15;
            }
};
class Child:private Parent //can access all the members except private ones
{   
    private: // everything is here

    public:
        void funChild()
        {
           // a=10; not accessible
            b=5;
            c=15;
        }
    
};
class GrandChild:public Child //can access all the members except private ones
{
    public:
        void funGrandChild()
        {
            // a=10; not accessible
            // b=5; not accessible
            // c=15; not accessible
        }
};
int main()
{   
    Child c;
    // c.a=10; cannot access as it is private 
    // c.b=5; cannot access as it is protected
    // c.c=15; cannot access as it is protected
    return 0;
}