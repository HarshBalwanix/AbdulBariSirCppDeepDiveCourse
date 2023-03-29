/*
Operators are + * - / % 
if we define our own datatypes 
example if we create a class Matrix 
class 
 C=A+B // + operator is overloaded 

Example 
Complex number 
a + ib  // i = pow(-1;1/2)
if we want to add two complex numbers
c1 = 5+7i
c2 = 2+9i
c1+c2 = 7 + 16i

now lets see how we can overload
class Complex
{
    private:
            int real;
            int img;
            public:
                    Complex(int r=0,int i=0)
                    {
                        real=r;
                        img =i;
                    }
            // //Now how to write a function to add two complex numbers
            //         Complex add(Complex x)
            //         {
            //             Complex temp;
            //             temp.real=real+x.real;
            //             temp.img=img+x.img;
            //             return temp;
            //         }
            
            //Now we are going to overload operator
                    Complex operator+(Complex x)
                    {
                        Complex temp;
                        temp.real=real+x.real;
                        temp.img=img+x.img;
                        return temp;
                    } 
}
int main()
{
     Complex c1(3,7);
    Complex c2(5,4);
    Complex c3;

    // c3 = c1.add(c2);
    // or 
    // c3 =c2.add(c1);   // add is function
    //instead of writing all above, we can overload operator
    c3=c1.operator+(c2);
    //Now we can use it like adding two numbers
    c3=c1+c2;
    return 0;
} 

*/