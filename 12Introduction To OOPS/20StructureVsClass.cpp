#include<iostream>
using namespace std;

struct Demo
{
    int x;
    int y;

    void Display()
    {
        cout<<x<<" "<<y;
    }
};

int main()
{
    Demo d;
    d.x=10;
    d.y=20;
    d.Display();
    return 0;
}

//Difference between Structure and Class
/*
In structure by default everyting is public 
whereas In class everyting is private by default
in c lang structure cannot have functions inside it, can have variables only whereas in cpp we can have both inside