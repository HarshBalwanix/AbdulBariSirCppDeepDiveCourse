/*
Very Important 
class Base
{
    public:
        Base( )
        {
            cout<<"Default constructor of base"<<endl;
        }
        Base(int x)
        {
            cout<<"Perameterized constructor of base "<<x<<endl;
        }
};
class Derived : public base 
{
    public:
        Derived()
        {
            cout<<"default of derived "<<endl;
        }
        Derived(int a)
        {
            cout<<"perameterized constructor of derived "<<a<<endl;
        }
        Derived(int x,int a): Base(x) // syntax to call parameterized constructor of base class
        {
            cout<<"perameterized constructor of derived "<<a<<endl;
        }
};
int main()
{
    Derived d; // first parent class(base ) will be executed and then children class(derived) is executed
    return 0;
    Derived d1(5); //first parent class(base ) will be executed and then children class(derived) is executed
    Derived d2(20,10);

} 
//  Derived d; 
output will be    default of base 
                  default of derived
    Derived d1(5);
output will be    default of base 
                  perameterized of derived 5 
     Derived d1(20,10);
output will be    perameterized of base 20 
                  perameterized of derived 10 


eg we wanna buy a table from furniture shop, first wooden plank(base) is needed then the table(derived) 


*/