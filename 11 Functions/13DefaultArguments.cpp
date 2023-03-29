/*
Default arguments
for example
int add(int x, int y)
{
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}

this is function overloading
but if we give input as 
2 5 
2 5 0 
we will get the same result
then here default arguments come into play
we can assign 0 to z as default and can make it as optional 
this is  how default arguments are used 
hence we can write the same code as
we can make default arguments only from right to left.
int add(int x,int y,int z=0) 
{
    return x+y+z;
}
now this function can work as double and triple arguments function combinely

*/
