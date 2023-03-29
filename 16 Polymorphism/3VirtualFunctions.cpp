/*
class Base
{
    public:
        void fun()
        {
            cout<<"fun of base"<<endl;
        }
};
class Derived:public Base
{
    public:
        void fun()
        {
            cout<<"fun of derived"<<endl;
        }
};

int main()
{
    Base *p=new Derived();
    p->fun(); // base class function will be called
    return 0;
}

example-
i have a basic car pointer pointing on advanced car object 
it will run like an advanced car but in cpp it works completely opposite 


Now how to make function of derived  class execute and not the base class

class Base
{
    public:
        void fun()
        {
            cout<<"fun of base"<<endl;
        }
};
class Derived:public Base
{
    public:
        virtual void fun() // this will make derived class work 
        {
            cout<<"fun of derived"<<endl;
        }
};

int main()
{
    Base *p=new Derived();
    p->fun(); // derived class function will be called as base function is virtual
    return 0;
}
Virtual function  is for to give the real life meaning in the code, to make it work like how it work in real life 
C++ allow both and give complete permission to programer to make it what he want to do

 */