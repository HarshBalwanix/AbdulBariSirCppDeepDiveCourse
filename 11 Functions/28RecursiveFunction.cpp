//Example of Recursive function
//A function calling itself is called as recursion
// Recursion is better than loops
/*
#include<iostream>
using namespace std;
void fun(int x)
{
    if(x>0)
    {
        cout<<x<<endl;
        fun(x-1);
    }
}
int main()
{
    fun(5);
    return 0;
}
*/
//another example
#include<iostream>
using namespace std;
void fun(int x)
{
    if(x>0)
    {
        fun(x-1);
        cout<<x<<endl;
    }
}
int main()
{
    fun(5);
    return 0;
}
//this will print the output in reverse order