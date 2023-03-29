/*
Friend Operator overloading
we can overload function by using friend function
c3=c1+c2; // here either c1 was adding or c2 was adding 
but in friend overloading somebody else will add
example
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex(int r=0,int i=0 )
        {
            real =r;
            img=i;
        }
        friend Complex Operator+(Complex c1,Complex c2);
        
};
Complex operator+(complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c2.img+c1.img;
    return temp; 
}
int main()
{
    Complex c1(4,5);
    Complex c2(3,7);
    Complex c3;
    c3=c1+c2;
    return 0;
}

*/