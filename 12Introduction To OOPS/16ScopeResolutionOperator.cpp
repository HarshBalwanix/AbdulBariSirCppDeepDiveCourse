/*
Scope Resolution Operator
We should write function outside the class or should not make them inline function
class Rectangle
{
    int length;
    int breadth;
    assume everything is present
    //Two ways to write function
    1st is to write inside the class itself
    int area()
    {
        return length*breadth;
    }
    2nd is just write prototype inside class 
    int perimeter();
};
//outside the class
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

int main()
{
    Rectangle r(10,5);
    cout<<r.area()<<"\n";
    cout<<r.perimeter();
}
*/