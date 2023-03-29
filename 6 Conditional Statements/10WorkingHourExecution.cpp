// This was demonstration of working hours execution
//But I am changing the question with
//Write a program to offer a job to the eligibles 
/*conditons are as follows 
1 age should be between 18 and 40 
2 if age is 40(included)-50 we will think 
3 if age is less than 18 or more than or equal to 50 then not eligible
*/
#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Enter your age "<<endl;
  cin>>age;
  if(age<18 || age>=50)
  {
      cout<<"sorry but you are not eligible"<<endl;
  }
  else if(age>=18 & age<40)
  {
      cout<<"You are eligible"<<endl;
  }
  else
  {
      cout<<"we will think about you"<<endl;
  }
  
  
  return 0;

}