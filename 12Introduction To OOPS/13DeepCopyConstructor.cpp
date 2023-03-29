/*
Deep copy constructor
sometimes when we copy a constructor it does not create new memory for an variable and it points towards original memory of that variable so to overcome this we use deep copy constructor
class Test
{
    int a;
    int *p;
    Test(int x)  //just function
    {
        a=x;
        p=new int[a];
    }
    Test(Test &t) //copy constructor
    {
        a=t.a;
        // p=t.p; //if we do like this than it will not  allocate new memory to the variable p but will point towards the originalvariable's memory 
        p=new int [a]; //this will allocate new memory  
    }
};
int main()
{
    Test t(5);
    Test t2(t); //copy constructor
    return 0;
}
*/