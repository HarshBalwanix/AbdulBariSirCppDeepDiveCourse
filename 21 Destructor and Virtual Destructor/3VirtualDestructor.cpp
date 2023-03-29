/*
1 Destructor
2 Destructor inheritance
3 Virtual Destructor

Virtual Destructor
class Base
{
    public:
        Base()
        {
            cout<<"Base Constructor";
        }
        virtual ~Base() //both cases mentioned
        {
            cout<<"Base destructor"<<endl;
        }
};
class Derived: pubic Base
{
    public:
        Derived()
        {
            cout<<"Derived Constructor ";
        }
        ~Derived()
        {
            cout<<"Derived Destructor";
        }
};
int main()
{
    Derived d; // if base is not virtual //firstly base constructor then derived constructor then derived destructor then base destructor will be called
Base *p=new Derived();
delete p; //after using i deleted //base destructor will be displayed if we didnt use virtual at base and if virtual base is written then derived class Destroyed will be output

}
*/