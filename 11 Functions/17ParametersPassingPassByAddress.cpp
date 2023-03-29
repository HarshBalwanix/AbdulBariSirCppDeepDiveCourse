/*
Call by Address
void swap(int *a, int *b) // a and  b are formal arguments
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=10,y=20;
    swap(&x,&y) // actual 
    cout<<x<<" "<<y<<endl;
    
}
a is address of x 
b is address of y
*a is exactly x
*b is exactly y
for modifying actual parameters we use call by address 
*/