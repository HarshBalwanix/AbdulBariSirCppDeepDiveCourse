/*
class Rectangle
{
    private:
        int length,breadth; //by default it is private so need not to mention though and this is kept private and now it is secured from mishandling
    public:  
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
    r.length=10; // cant do this now as it is private
    r.breadth=-5; // we need functions to access all these 
    cout<<r.area(); // output will be negative which is not correct and we messed up here, this is why we keep it as private
    
}

//Now will make function to access length and breadth
class Rectangle 
{
    private:
    int length;
    int breadth;
    pubic:
    void setLength(int l)
    {
        if(l>=0)
        {
            length =l;
        }
        else
        {
            length=0;
        }
    }
    void setBreadth(int b)
    {
        if(b>=0)
        {   
            breadth=b;
        }
        else
        {
            breadth=0;
        }
    }
    void getLength()
    {
        return l;
    }
    void getBreadth()
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
int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(-5);
    cout<<"length is "<<r.getLength()<<endl;
    cout<<"breadth is "<<r.getBreadth()<<endl;
    cout<<"Area is "<<r.area()<<endl;

}
Here getXXX are accessor
     setXXX are mutators
collectively called as property functions
If we just write get in fuction then it is read only 
If we just write set in fuction then it is write only 
If we just write set and get in fuction then it is read and write only 

*/
