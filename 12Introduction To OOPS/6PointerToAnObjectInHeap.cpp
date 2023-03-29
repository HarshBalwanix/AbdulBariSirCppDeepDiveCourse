/*
Pointer to an object in heap

//Objecct in stack
class Rectangle
{
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
int main()
{
    Rectangle r;
    Rectangle *p;
    p=&r;
    r.length=10;
    p->length=10;  // can read as p caps length assign 10 or we can say p's length assign 10 
    // -> operator is used to access members of an object using pointers
    p->breadth=5;  // simply we can say we are replacing . with -> for pointers
    cout<<p->area();

}
//Now how to create an object in heap using pointer 
void main()
{
    Rectangle *p;
    p=new Rectangle; // object is created in heap
    //or we can say
    Rectangle *q=new Rectangle();
    p->length=10;
    p->breadth=5;
    cout<<p->area()<<endl;
}
*/