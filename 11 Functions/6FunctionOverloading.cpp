/*
Function overloading
we can write more than one function with the same name but different arguments
either the datatype of parameter or the number might be different
example
if return type are the only difference then it is not function overloading but it is same function repeated again
int add(int x, int y)
{
    return x+y;
}
int add(int x ,int y ,int z)
{
    return x+y+z;
}
float add(float x, float y)
{
    return x+y;
}
void main()
{
    int a,b,c,d;
    c=add(a,b);
    d=add(a,b,c);
    int i=2.5f,j=3.4,k;
    k=add(i,j);
}
Another example
int max(int x,int y) //this one is  not function overlaoding as just return type is different and all the arguments are same.
int max(int x, int y, int z)
float max(int x, int y) //with this one 
float max(float x,float y) 

*/
