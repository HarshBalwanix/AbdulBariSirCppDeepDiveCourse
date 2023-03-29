//Write a program in C++ to display n terms of natural number and their sum.
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"Sum upto "<<n<<" terms is "<<sum<<endl;
    return 0;
}
*/

//Write a program in C++ to read 10 numbers from keyboard and find their sum and average.
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    float average;
    for(i=1;10>=i;i++)
    {
        cout<<"Enter the number"<<endl;
        cin>>n;
        sum=sum+n;
    }
    cout<<"sum of all these is "<<sum<<endl;
    average=sum/10;
    cout<<"Average of all these is "<<average<<endl;
    return 0;
}
*/

//Write a program in C++ to display the cube of the number upto given an integer. 
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,cube;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        
        cube=i*i*i;
        cout<<"Cube of "<<i<<" is "<<cube<<endl;
    }
    
    return 0;
}
*/

                                   /////Amazing\\\\\\\\\\\\\\\\\\\\\\

 //Write a program in C++ to display the multiplication table vertically from 1 to n.
 /*
 Test Data :
Input upto the table number starting from 1 : 8
Expected Output :
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
Click me to see the solution
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,m,multi=1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    m=n;
    for(i=1;i<=10;i++)
    {
        for(n=1;n<=m;n++)
        {
            if(n<m)
            {multi=i*n;
            cout<<multi<<",";
            }
            else{
                multi=i*n;
                cout<<multi;
            }
        }
    cout<<endl;
    }
    return 0;
}
*/

                         /////////////Amazing over\\\\\\\\\\\\\\\\\\\\\\\\\\\

/*Write a program in C to display the n terms of odd natural number and their sum . Go to the editor
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,term;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        term = 1+(2*(i-1));
        cout<<term<<" , ";
       // sum=sum+term; //this is by process
    }
    sum=(n)*(n); // this is smart work
    cout<<endl;
    cout<<"sum of "<<n<<" terms is "<<sum;
    return 0;
}
*/


/*
//Write a program in C++ to display the pattern like right angle triangle using an asterisk. Go to the editor

The pattern like :

*
**
***
****
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {
        cout<<"*";
        }
        cout<<endl;
     
    }
    return 0;
}
*/
/*
 Write a program in C to display the pattern like right angle triangle with a number. Go to the editor

The pattern like :

1
12
123
1234
 */
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {
        cout<<j;
        }
        cout<<endl;
     
    }
    return 0;
}
*/
/*
 Write a program in C++ to make such a pattern like right angle triangle with a number which will repeat a number in a row. Go to the editor

The pattern like :

 1
 22
 333
 4444
 */
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    
    }
    return 0;
}
*/
/*
 Write a program in C to make such a pattern like right angle triangle with number increased by 1. Go to the editor

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10
   */
  /*
  #include<iostream>
using namespace std;
int main()
{
    int i,n,j,k=1;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//Write a C++ program to calculate the factorial of a given number.
/*
 #include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial number is "<<fact<<endl;
return 0;
}
*/
// Write a program in C++ to display the n terms of even natural number and their sum.
 /*
 #include<iostream>
using namespace std;
int main()
{
    int i,n,k,sum=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<2*i<<" ";
        sum +=i;
    }
    cout<<endl;
    cout<<"sum upto "<<n<<" terms is "<<sum<<endl;
    return 0;
}
*/
/*
 Write a c program to check whether a given number is a perfect number or not. Go to the editor
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,k,sum=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    k=n;
    for(i=1;i<=n;i++)
    { 
        if(n%i==0)
        {
            cout<<i<<endl;
            sum=sum+i;
        }  
    }
    cout<<sum<<endl;
    if(sum==2*k)
    {
        cout<<"perfect number"<<endl;
    }
    else
    {
        cout<<"Not perfect number"<<endl;
    }
    return 0;
}
*/
/*
 Write a C program to check whether a given number is an armstrong number or not. Go to the editor
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,k,sum=0,r;
    cout<<"Enter the number "<<endl;
    cin>>n;
    k=n;
    for(n;n>0;i++)
    {
        r=n%10;
        cout<<r<<endl;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(sum==k)
    {
        cout<<"Armstrong number "<<endl;
    }
    else
    {
        cout<<"Not armstrong"<<endl;
    }
    return 0;
}
*/
/*.  Write a C program to determine whether a given number is prime or not. Go to the editor
 Test Data :
Input a number: 13
Expected Output :
13 is a prime number.
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            fact++;
        
        }
        
    }
    if(fact==0)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"Not prime";
    }
        return 0;
}

*/
/*
Write a program in C++ to display the number in reverse order. Go to the editor
Test Data :
Input a number: 12345
Expected Output :
The number in reverse order is : 54321
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,r;
    cout<<"Enter the number "<<endl;
    cin>>n;
    
    for(n;0<n;n=n/10)
    {
        r=n%10;
    rev=rev*10+r;
    }
    cout<<rev<<endl;
    return 0;
}

*/
/*
 Write a program in C++ to check whether a number is a palindrome or not. Go to the editor
Test Data :
Input a number: 121
Expected Output :
121 is a palindrome number.
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n,rev=0,r;
    cout<<"Enter the number "<<endl;
    cin>>n;
    i=n;
    for(n;0<n;n=n/10)
    {
        r=n%10;
    rev=rev*10+r;
    }
    if(i==rev)
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }

    return 0;
}
*/
/*
Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9. Go to the editor
Expected Output :
Numbers between 100 and 200, divisible by 9 :
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,n=200,sum=0,r;
    for(i=100;i<n;i++)
    {
        r=i%9;
        if(r==0)
        {
            cout<<i<<endl;
           sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
*/
/*
 Write a program in C++ to convert a decimal number into binary without using an array. Go to the editor
Test Data :
Input a decimal number: 25
Binary number equivalent to said decimal number is: 0000000000000000000000000001 1001
*/
/*
#include<iostream>
using namespace std;
int main()
{
   int i,n,r,m=0,rev=0;
   cout<<"Enter number in decimal form"<<endl;
   cin>>n;
   for(n;n>0;n=n/2)
   {
       r=n%2;
       cout<<r<<endl;
       m=m*10+r;
   }
   for(m;m>0;m=m/10)
   {
       i=m%10;
       rev=rev*10+i;
   }
   cout<<rev<<endl;
    return 0;
}
*/
/*
Write a C++ program to find HCF (Highest Common Factor) of two numbers. Go to the editor
Test Data :
Input 1st number for HCF: 24
Input 2nd number for HCF: 28
Expected Output :
HCF of 24 and 28 is : 4
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int i,n,r,m;
   cout<<"Enter first number "<<endl;
   cin>>n;
   cout<<"Enter second number "<<endl;
   cin>>m;
   while(m!=n)
   {
       if(m>n)
       {
           m=m-n;
       }
       else if(n>m)
       {
           n=n-m;
       }
   }
   cout<<m<<endl;
   return 0;
}
*/
/*
Write a program in C++ to find LCM of any two numbers using HCF. Go to the editor
Test Data :
Input 1st number for LCM: 15
Input 2nd number for LCM: 20
Expected Output :
The LCM of 15 and 20 is : 60

LCM=(x*y)/GCD
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int i,n,r,m,gcd,lcm;
   cout<<"Enter first number "<<endl;
   cin>>n;
   i=n;
   cout<<"Enter second number "<<endl;
   cin>>m;
   r=m;
   while(m!=n)
   {
       if(m>n)
       {
           m=m-n;
       }
       else if(n>m)
       {
           n=n-m;
       }
   }
   gcd=m;
   lcm=(i*r)/gcd;
   cout<<"The LCM of two numbers is "<<lcm<<endl;
   return 0;
}
*/
/*
Write a C++ program to check whether a number is a Strong Number or not. Go to the editor
Test Data :
Input a number to check whether it is Strong number: 15
Expected Output :
15 is not a Strong number.
Strong number is a special number whose sum of the factorial of digits is equal to the original number. 
For Example: 145 is strong number. Since, 1! + 4! + 5!
*/
/*
#include<iostream>
using namespace std;
int main() 
{
    int n,fact,i,r,m,sum=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
        cout<<sum<<endl;
    if(sum==m)
    {
        cout<<"Its a strong number";
    }
    else
    {
        cout<<"not strong number";
    }

    return 0;
}
*/
/*
 Write a c++ program to find out the sum of an A.P. series. Go to the editor
Test Data :
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 10
Input the common difference of A.P. series: 4
Expected Output :
The Sum of the A.P. series are :
1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190
*/
/*
#include<iostream>
using namespace std;
int main() 
{
    int l,i,a,d,sum=0,n;
    cout<<"Enter first term"<<endl;
    cin>>a;
    cout<<"Enter common difference term"<<endl;
    cin>>d;
    cout<<"Enter number of terms"<<endl;
    cin>>n;
    l=a+(n-1)*d;
    for(i=1;i<=n;a=a+d)
    {
       
        i++;
        sum=sum+a;
        if(a!=l)
        {
            cout<<a<<" + ";
        }
        else if(a==l)
        {
            cout<<a;
            cout<<" = "<<sum;
        }
    }
    return 0;
}
*/
/*
Write a program in C++ to convert a decimal number into octal without using an array. Go to the editor
Test Data :
Enter a number to convert : 79
Expected Output :
The Octal of 79 is 117.
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,i,r,rev=0,fact=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%8;
        cout<<r<<endl;
        while(r>0)
        {rev=rev*10+r;
        

        r=r/10;
        }
        n=n/8;
    }
    cout<<rev<<endl;
    while(rev>0)
    {
        i=rev%10;
        fact=fact*10+i;
        rev=rev/10;
    }
    cout<<fact<<endl;
    
    return 0;
}
*/
/*
Write a program in c++ to find the Sum of GP series. Go to the editor
Test Data :
Input the first number of the G.P. series: 3
Input the number or terms in the G.P. series: 5
Input the common ratio of G.P. series: 2
Expected Output :
The numbers for the G.P. series:
3.000000 6.000000 12.000000 24.000000 48.000000
The Sum of the G.P. series : 93.000000
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,a,r,n,sum=0,rem=0;
    cout<<"Enter the first term of GP"<<endl;
    cin>>a;
    cout<<"Enter the common ratio of GP"<<endl;
    cin>>r;
    cout<<"Enter number of terms"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        rem=a*pow(r,i);
        sum=sum+rem; 
    }
    cout<<"Sum is "<<sum;
    return 0;
}
*/
/*
 Write a program in C++ to check Armstrong number of n digits. Go to the editor
Test Data :
Input an integer : 1634
Expected Output :
1634 is an Armstrong number
 Armstrong number is a number whose sum of cubes of digits of number is equal to the number itself  
for eg 153 as 1^3 +5^3 +3^3 = 1+125+27=153
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,l,m,n,sum=0,r,rev;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<"Enter number of digits"<<endl;
    cin>>l;
    m=n;
    for(;0<n;n=n/10)
    {
        r=n%10;
        sum=sum+pow(r,l);
    }
    cout<<sum<<endl;
    if(sum==m)
    {
        cout<<"Its an armstrong number";
    }
    else
    {
        cout<<"Its not an armstrong number";
    }
    return 0;

}
*/