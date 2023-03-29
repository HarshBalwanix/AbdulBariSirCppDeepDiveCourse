/*
Throw and  Catch between functions
why try catch over if else
int division(int x,int y)
{
    if(y==0)
    {
        throw 1;  //just for this purpose we use try and catch, here this will send this msg to main that there is some error in input 
    }
    return x/y;
}
int main()
{
    int a=10,b=5,c;
    try 
    {
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero"<<endl<<"Error code is "<<e<<endl;
        return 0;
    }
    cout<<"Thanks for using"<<endl;
    return 0;
}
*/