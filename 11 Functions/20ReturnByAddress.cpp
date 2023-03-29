/*
Return by address
function can return address too
example
int * fun(int size)
{
    int *p=new int[size];
    for(int i =0;i<size;i++)
    {
        p[i]=i+1;
    }
        return p;
} 
main()
{
    int *ptr = fun(5);
    
}
*/