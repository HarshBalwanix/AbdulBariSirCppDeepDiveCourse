/*
How to write a class
Let us define a class for rectangle
class Rectangle
{
    public:
        int length;
        int breadth;
        
        int area()
        {
            return length*breadth;
        }
        int perimeter()
        {
            return 2*(length+breadth);
        }
};
void main()
{
    Rectangle r1,r2;
    r1.length=10; //using dot operators
    r2.length=5; // we will not be able to access length and breadth if it is not set to public and by default it will be kept private
    cout<<r1.area()<<endl;  // ouptut=50
    r2.length=15; r2.breadth=10;
    cout<<r2.area()<<endl; // output=150
}
*/