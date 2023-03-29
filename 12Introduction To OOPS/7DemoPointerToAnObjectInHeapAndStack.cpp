//Demo pointer to an object in stack
/*
#include<iostream>
using namespace std;
class Triangle
    {
     public:
        int breadth,height;
        int area()
        {
            return breadth*height/2;

        }
        int sum() //sum of two sides
        {
            return breadth+height;
        }

   };
int main()
{
    Triangle t1; //created in stack
    Triangle *p;
    p=&t1;
    p->breadth=10;
    p->height=20;
    cout<<"Area of Right angle triangle is "<<p->area()<<endl;
    cout<<"Sum of two sides of Triangle is "<<p->sum()<<endl;
    return 0;
}
*/
//Demo pointer to object in heap
#include<iostream>
using namespace std;
class Triangle 
{
   public:
        int height,breadth;
        int area()
        {
            return height*breadth/2;
        }
        int sum()
        {
            return breadth+height;
        }
      
};
int main()
{
    Triangle *p=new Triangle(); // created in heap 
    p->breadth=10;
    p->height=20;
    cout<<"Area of Triangle is "<<p->area()<<endl;
    cout<<"Sum of two sides of Triangle is "<<p->sum()<<endl;
    return 0;
}
