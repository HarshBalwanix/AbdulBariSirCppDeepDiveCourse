/*
Exception Handling construct

int main()
{
    int a=10,b=0,c;

    try
    {
         if(b==0)
          throw 1; //exception we thrown
        c=a/b;
        cout<<c;
    }
    catch(int e)
    {
        cout<<"Division by zero"<<endl;
        return 0;
    }
    cout<<"Bye"<<endl;
}


try and catch are construct 
like 
try 
{
    --
    --
    --
}
catch 
{
    --
    --
    --
}
when try block have an error, code will execute till the line where error was present and then catch will be executed
if try block have no error, catch block will not be executed 
throw and catch are just for linking 
*/