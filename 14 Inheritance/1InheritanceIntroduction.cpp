/*
Inheritance 
acquirung the features of existing class to a new class
ex-
if a car company has designed a car 
they can make a new car with extra featues along with this existing design, this is inheritance


class Rectangle
{
   int length,breadth;
   public:
    -
    -
    -

};
int main()
{
Rectangle r1,r2,r3;
}


we can create class cuboid using class rectangle 
class Cuboid Rectangle //read as class cuboid extended from Rectangle
{
    -
    -
    -

}
cuboid c1,c2,c3;

now an example-
class Base
{
    public:
        int x,
        void show()
        {
            cout<<x;
        }
};
class Derived :public Base //syntax for inheritance
{
    int y;
    void display()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    Base  b; //object of base class is having x and show only
    b.x=25;
    b.show(); //will display 25
    Derived b; // object of derived class is having  y and display as well as x and show too
    d.x=10;
    d.y=15;
    d.show(); // will display 10
    d.display();  // will display 15
    return 0;
}
*/