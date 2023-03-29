//Constructors
/*
constructor is a functon that have same name as class name but they dont have any datatype written outside 
Rectangle r;
1 Default constructor //provided by compiler
2 Non parametrized constructor
3 Parametrized constructor
4 Copy Constructor

class Rectangle
{
    int length,breadth;
    public:
        Rectangle( ) // parameterized constructor or default constructor
        {
            length=0;
            breadth=0; //we dont need this
        } 
        Rectangle(int l=0,int b=0)
        {
            setlength(l);
            setbreadth(b);
        }
        Rectangle(Rectangle &rect)
        {
            length=rect.length;
            breadth=rect.breadth;
        }
};
int main()
{
    Rectangle r; //default constructor or non parametrized constructor 
    Rectangle r(); //default constructor or non parametrized constructor
    Rectangle r(10,5); //Parametrized constructor
    Rectangle r2(r); //Copy constructor
}

For Example 
if we want to by a marker there are several cases
case 1 we tell the shopkeeper that we want marker and he gave us one then it is like default or non parametrized constructor as we didnt gave any parameters for marker like shape colour and all  
case 2 we tell the shopkeeper that we want marker and we tell him colour size of marker and he gave us one then it is like parametrized constructor as we  gave parameters for marker like shape colour and all  
case 3 we tell the shopkeeper that we want marker and we show him the exact marker we want and he gave us a copy of that marker then it is like copy constructor 


*/
