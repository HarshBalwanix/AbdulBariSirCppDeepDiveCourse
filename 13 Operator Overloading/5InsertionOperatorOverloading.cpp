/*
Overload output/input operator
class Complex
{
    int real;
    int img;
    public:
    friend ostream & operator<<(ostream &o,Complex &c1); //here it will take two parameters as output stream and complex number
    
};
ostream & operator<<(ostream &o,Complex &c1)
    {
        o<<c1.real<<"+i"<<c1.img;
        return o;
    }
int main()
{
    int x=10;
    cout<<x; // this cout function can do
    Complex c1 =(3,7);
    cout<<c1; // this cout doesn't know 
    we can overload this operator
    c1.display(); // this function will give the required output but we want with  cout only
    returrn 0;
}
*/