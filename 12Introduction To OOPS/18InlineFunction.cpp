/*
Inline Function 
Functions which expand in the same line where it is called are inline functions
Example
class Test
{
    public:
        void fun1()
        {
            cout<<"Inline";
        }
        void fun2();
        inline void fun3();
        
};
void Test::fun2()
{
    cout<<"Not Inline "<<endl;
}
void Test::fun3()
{
      cout<<"Inline";
        
}
int main()
{
    Test t;
   cout<<t.fun1(); // this function will be executed as part of main function
   cout<<t.fun2();// this function will be executed as separate functions
   cout<<t.fun3(); // this function will be executed as part of main function even though its code is written outside the main function
    return 0;
}
*/