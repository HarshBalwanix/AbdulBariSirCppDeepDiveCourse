// Write a C++ program to accept two integers and check whether they are equal or not
/*
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    if(num1==num2)
    {
        cout<<"Both numbers are equal"<<endl;
    }
    else if(num1>num2)
    {
        cout<<"Both numbers are not equal and first number is greater than second one"<<endl;

    }
    else
    {
        cout<<"Both numbers are not equal and second number is greater than first one"<<endl;
    }
    return 0;
}
*/

//Write a C++ program to check whether a given number is even or odd.
/*
#include<iostream>
using namespace std;

int main()
{   
    int num;
    cout<<"Enter the number."<<endl;
    cin>>num;
    if(num%2==0)
    { 
        cout<<"Given number is even"<<endl;
    }
    else
    {
        cout<<"Given number is odd"<<endl;
    }
    return 0;
}
*/

//Write a C++ program to check whether a given number is positive or negative.
/*
#include<iostream>
using namespace std;

int main()
{   
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(num==0)
    { 
        cout<<"Given number is zero"<<endl;
    }
    else if(num>0)
    {
        cout<<"Given number is positive"<<endl;
    }
    else
    {
        cout<<"Given number is negative"<<endl;
    }
    return 0;
}
*/

//Write a C++ program to find whether a given year is a leap year or not.
/*
#include<iostream>
using namespace std;

int main()
{   
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;
    if(year%4==0)
    { 
        cout<<"Year is Leap Year"<<endl;
    }
    else
    {
        cout<<"Year is not a leap Year"<<endl;
    }
    return 0;
}
*/

//Write a C++ program to read the age of a candidate and determine whether it is eligible for casting his/her own vote
/*
#include<iostream>
using namespace std;

int main()
{   
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>=18)
    { 
        cout<<"Congratulation! You are eligible for casting your vote"<<endl;
    }
    else
    {
        cout<<"Sorry you are not eligible for casting your vote"<<endl;
    }
    return 0;
}
*/
//Write a C++ program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
/*
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the value of m"<<endl;
    cin>>m;
    if(m>0)
    {
        cout<<"the value of n is 1"<<endl;
    }
    else if(m==0)
    {
        cout<<"the value of n is 0"<<endl;
    }
    else
    {
        cout<<"the value of n is -1"<<endl;
    }
    return 0;
}
*/
// Write a C++ program to find the largest of three numbers. 
/*
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter all the three numbers "<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2)
    {   if(num1>num3)
                {cout<<"First number "<<num1<<" is largest"<<endl;
                }
                else
                {cout<<"Third number "<<num3<<" is largest"<<endl;
                }
    }
    else if(num1<num2)
    { if(num2>num3)
        {cout<<"Second number "<<num2<<" is largest"<<endl;
        }
        else
        {
           cout<<"Third number "<<num3<<" is largest"<<endl; 
        }
    }    
    return 0;
}
*/
 //Write a C++ program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
 
 /*
 #include<iostream>
 using namespace std;
 int main()
{
    int x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    if(x==0,y==0)
    {
        cout<<"At origin"<<endl;
    }
    else if(x>0 & y>0)
    {
        cout<<"Cordinates lies in 1st quadrant"<<endl;
    }
    else if(x<0 & y>0)
    {
        cout<<"Cordinates lies in 2nd quadrant"<<endl;
    }
    else if(x<0 & y<0)
    {
        cout<<"Cordinates lies in 3rd quadrant"<<endl;
    }
    else
    {
        cout<<"Cordinates lies in 4th quadrant"<<endl;
    }
    return 0;
}
*/

/*
 Write a C++ program to find the eligibility of admission for a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and (Total in all three subject >=190 or Total in Maths and Physics >=140)------------------------------------- 
Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int maths,phy,chem,total,maph;
    cout<<"Enter marks in maths then in physics then in chemistry"<<endl;
    cin>>maths>>phy>>chem;
    total =maths+phy+chem;
    maph =maths+phy;
    if(maths>=65 & phy>=55 & chem>=50)
    {  if(total>=190 || maph>=140)
        {
        cout<<"The candidate is eligible."<<endl;
        }
        else
        {
            cout<<"The candidate is not eligible."<<endl;
        }
    }
    return 0;
}
*/
/*Write a C++ program to check whether a triangle is Equilateral, Isosceles or Scalene. Go to the editor
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.*/
/*
#include<iostream>
using namespace std;
int main()
{
    int fangle,sangle,tangle;
    cout<<"Enter all the three angles "<<endl;
    cin>>fangle>>sangle>>tangle;
    if(fangle!=sangle & sangle!=tangle)
    {
        cout<<"Triangle is scalene "<<endl;
    }
    else if (fangle==sangle & sangle==tangle)
    {
        cout<<"Triangle is equilateral"<<endl;
    }
    else
    {
        cout<<"Triangle is isosceles"<<endl;
    }
    return 0;
}
*/

/*
Write a C++ program to check whether a character is an alphabet, digit or special character. Go to the editor
Test Data :
@
Expected Output :
This is a special character.
*/
/*
#include<iostream>
using namespace std;
int main()
{
  char none;
  cout<<"Enter input"<<endl;
  cin>>none;
  if((none>='a' & none<='z') || (none>='A' & none<='Z'))
  {
    cout<<"This is an alphabet"<<endl;
  } 
  else if((none>='0' & none<='9'))
  {
      cout<<"This is a digit"<<endl;
  }
  else
  {
      cout<<"This is a special character"<<endl;
  }
  return 0;
}
*/

//Check whether an alphabet is a vowel or consonant
/*
#include<iostream>
using namespace std;
int main()
{
  char none;
  cout<<"Enter input"<<endl;
  cin>>none;
  if((none>='a' & none<='z') || (none>='A' & none<='Z'))
  { if( none=='a'|| none=='e'|| none=='i'|| none=='o'|| none=='u'|| none=='A' ||none=='E'||none=='I'||none=='O'||none=='U')
    cout<<"This is an vowel"<<endl;
    else
    {
        cout<<"This is not a vowel"<<endl;
    }
  } 
  else if((none>='0' & none<='9'))
  {
      cout<<"This is a digit"<<endl;
  }
  else
  {
      cout<<"This is a special character"<<endl;
  }
  return 0;
}
*/

/*
Write a program in C++ to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay by the customer. The charge are as follow : 

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

Test Data :
1001
James
800
Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00
*/
/*

#include<iostream>
using namespace std;
int main()
{
    float unit,total,subcharge,net;
    string custom,name;
    cout<<"Enter customer id"<<endl;
    cin>>custom;
    cout<<"Enter Name "<<endl;
    cin>>name;
    cout<<"Enter units consumend"<<endl;
    cin>>unit;
    if(unit<=199)
    {
        total = (unit)*(1.20);
        cout<<"Total bill to be paid by the consumer is "<<total<<" in rupees"<<endl;
    }
    else if(unit>=200 & unit<400)
    {
       total = (unit)*(1.50);
        cout<<"Total bill to be paid by the consumer is "<<total<<" in rupees"<<endl; 
    }
    else if(unit>=400 & unit<600)
    {
        total = (unit)*(1.80);
        cout<<"Total bill to be paid by the consumer is "<<total<<" in rupees"<<endl; 
    }
    else
    {
        total = (unit)*(2.00);
        cout<<"Total bill to be paid by the consumer for consuming "<<unit<<" is "<<total<<" in rupees"<<endl;

    }
    
    if(total>400)
    {
        cout<<"Extra 15% will be charged of total amount as tax"<<endl;
        subcharge = total*(0.15);
         if(subcharge<100)
         {
             cout<<"Subcharge amount is 100"<<endl;
         }
         else
         {
            cout<<"total subcharge is "<<subcharge<<endl;
         }
    }
    else
    {
       cout<<"subcharge amount:0 Rs"<<endl;
    }
 net =  subcharge+total;
    cout<<"Total bill is "<<net<<" in Rupees"<<endl; 
    return 0;
}
*/

/* Write a program in C++ to read any day number in integer and display day name in the word. Go to the editor
Test Data :
4
Expected Output :
Thursday*/
/*
#include<iostream>
using namespace std;
int main(){
  int days; 
    cout<<"Enter number"<<endl;
    cin>>days;
    if(days==1)
    {
      cout<<"Monday"<<endl;
    }
    else if(days==2)
    {
      cout<<"Tuesday"<<endl;
    }
    else if(days==3)
    {
      cout<<"Wednesday"<<endl;
    }
    else if(days==4)
    {
      cout<<"Thursday"<<endl;
    }
    else if(days==5)
    {
      cout<<"Friday"<<endl;
    }
    else if(days==6)
    {
      cout<<"Saturday"<<endl;
    }
    else if(days==7)
    {
      cout<<"Sunday"<<endl;
    }
    else
    {
        cout<<"Enter valid integer between 1-7"<<endl;
    }
    
    return 0;

}
*/