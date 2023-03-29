/*
//data hiding 
class Rectangle
{
    public:
        int length,breadth;
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
    Rectangle r;
    r.length=10;
    r.breadth=-5;
    cout<<r.area(); // output will be negative which is not correct and we messed up here, this is why we keep it as private
    
}
*/