/*
runtime errors are given by pointers if not used properly
types of problems
1 Uninitialiased pointers
we need to intialise pointer 
just like 
int x=10;
int *p;
p=&x;

or like
p=(int*)hexadecimal address
or 
p = new int[5];

2 Memory leak
we need  to deallocate heap memory after allocating it to pointer
just like 
int *p = new int[5];
.
.
.
.
delete []p;
p = nullptr; or else p= NULL; or else p=0;
3 Dangling pointer
this type of problem arises when we try to access the memory which is already deallocated
just like
void main()
{
    int *p = new int[5];
    .
    .
    .
    fun(p);
    cout<<*p; // will give runtime error
}
void fun(int *q)
{
    .
    .
    .
    .
    delete[]q; //here it is deleted 

}
*/