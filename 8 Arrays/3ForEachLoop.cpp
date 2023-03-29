/*
for each loop works with array
used to access all elements of array
for(int x : A) // read as fo each x in A
it is not dependent upon size
it will not work upon pointers

int A =[8,6,3,9,7,4]
for(int x : A)
{
    cout<<++x;
}
output will be 9,7,4,10,8,5 // but the elements will be remained same as they were before  in A

int A =[8,6,3,9,7,4]    
for(int &x : A)   //this & is reference 
{
    cout<<++x;
}
output will be 9,7,4,10,8,5 // but the elements will be changed thsis time as this refernce will do this change in A
*/