//In this program, user is asked to enter a year and this program check whether it is leap year or not.
#include<iostream>
using namespace std;
int main()
{
  int year;
  cout<<"Enter the year\n";
  cin>>year;
  if(year%4==0 && year>=0)
  {
      cout<<"This is leap year"<<endl;
  }
  else if(year%4!=0 && year>=0)
  {
      cout<<"This is not a leap year"<<endl;
  }  
  else
  {
      cout<<"invalid year"<<endl;
  }
    return 0;
}