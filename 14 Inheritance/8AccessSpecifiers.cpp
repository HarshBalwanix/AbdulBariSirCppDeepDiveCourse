/*
Access Specifiers are
public:
private:
protected:

class Base
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        void funBase()
        {
            a=10;// accessible
            b=20; //accessible
            c=30; //accessible
        }
};
class Derived:Base
{
    public:
       void funDerived()
       {
           a=1; // not accessible 
           b=2; // accessible 
           c=3; // acccessible
       }
};
int main()
{
    Base x; //we cant access private and protected

}
 

 Example -
    my company has designed a car,other company wants to borrow your design and designed a new car this means your car is inheriting from my car
    and if i want you to not modify any particular thing i will keep it in private and you can access public and protected 
    and if i dont want customer to modify anything i will keep it in protected(if i want you to access that) or private(if i dont want you to access that) , he can access only public 
*/

/*
Creating a table:

                        private          protected       public
inside class             accessible      accessible     accessible
inside derived class    not accessible   accessible     accessible
on object               not accessible   not accessible  accessible

*/