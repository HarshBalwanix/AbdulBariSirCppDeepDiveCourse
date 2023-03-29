//Demo catch 
#include<iostream>
using namespace std;
class MyException1 
{

};
class MyException2:public MyException1
{

};
int main()
{
   try
   {
       throw string("Harsh"); //if int then catch 1 if double then 2 if char then 3 if float then 4 if string then 5 and 6 if we dont know the data type
   }
   catch(int e)
   {
       cout<<e<<endl;
   }
   catch(double e)
   {
       cout<<e<<endl;
   }
   catch(char e)
   {
       cout<<e<<endl;
   }
   catch(float e)
   {
       cout<<e<<endl;
   }
//    catch(string e)
//    {
//        cout<<e<<endl;
//    }
      catch(MyException2 e) //child class first
      {
          cout<<"child"<<endl; 
      }
      catch(MyException1 e) //then parent class
      {
          cout<<"child"<<endl; 
      }
     catch(...)
     {
         cout<<"dont know"<<endl;
     }
    return 0;
}