/*
Namespaces 
used to remove name conflict 
For examples i have two functions 
namespace First 
{
void fun()
{
    cout<<"First";
}
}
namespace Second
{
void fun()
{
    cout<<"Second";
}
}
using namespace First;
int main()
{
  First::fun();
  Second::fun();
  //or
  fun(); // it will call first 
  Second::fun(); //it will call second 
  return 0;
}
*/