//Examples of Inheritance
/*
class Rectangle
{
    private:
        int length,breadth;
    public:
        Rectangle(int l=0,int b=0);
        int getlength();
        int get breadth();
        int setlength();
        int setbreadth();
        int area();
        int perimeter();
};
we can have cuboid just by adding height to rectangle
class Cuboid : public Rectangle
{
    private:
        int height;
    public:
        Cuboid(int l=0,int b=0,int h=0)
        {
            height=h;
            setlength(l);
            setbreadth(b); 
        }
        int getheight();
        int setheight();
        int volume()
        {
            return getlength()*getbreadth()*height;
        }
        
        
};
int main()
{
    Cuboid c(10,5,3);
    cout<<c.getlength()<<endl;
    //all function of rectangle and cuboid is available for accessing through cuboid class
    cout<<c.volume();
    cout<<c.area();
    cout<<c;//not possible, we need to overload it
    return 0;  
}
*/