//Write a program to tell the  user that what he actually is ,by his age
//age<12 child 
// 12<=age<=50 young
// age>=50 old 
#include<iostream>
using namespace std;
int main()
{
    int age;
  cout<<"Enter your age "<<endl;
  cin>>age;
  if(age<12) 
  {
      cout<<"You are child"<<endl;
  }
  else if(age>=12 & age<=50)
  {
      cout<<"You are young"<<endl;
  }
  else
  {
      cout<<"You are old"<<endl;
  }
    return 0;
}