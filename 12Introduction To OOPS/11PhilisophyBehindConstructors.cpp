/*
Philosophy behind Constructors
Constructors 
just like we bought a car which is having some colour, similarly if we got a rectangle it must have some length and breadth which are pre defined 
so this is why we want length and breadth to be given at the time of construction of the object
thats why constructors are used  
class Rectangle
{
    private:
            int length;
            int breadth;
    public:
            int setLength(int l)
            {
                if(l>0)
                {
                    length=l;
                }
                else 
                {
                    length=0;
                }
            }  
            int setBreadth(int b)
            {
                if(b>0)
                {
                    breadth=b;
                }
                else 
                {
                    breadth=0;
                }
            }   
            int getLength()
            {
                return length;
            }
            int getBreadth()
            {
                return breadth;
            }
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
    Rectangle r(10,5); // with function we can do this 
    // r.setLength(10);
    // r.setLength(5);
}
*/