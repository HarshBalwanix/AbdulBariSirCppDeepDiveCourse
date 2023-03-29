/*
Functions templates 
the functions which are generic means generalised
Example
int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

float max(float x,float y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

since both above functions differ in data type only that is 1 is having integer and other one is having float
so template helps us here 
template<class T>
T max(T x, T y)
{
    if(x>y)
    {
        return x;

    }
    else
    {
        return y;
    }
} 
this fucntion works for all datatypes or objects
*/