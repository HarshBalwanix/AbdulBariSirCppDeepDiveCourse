#include<iostream>
using namespace std;
class Rectangle
{
    private:
            int length,breadth;
    public:
        int setLength(int l)
        {   if(l>0)
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
            else{
                breadth=0;
            }
        }
        int getLength( )
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
int main()
 {
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;
    cout<<r.area();
    return 0;
 }