// Compound assignment operators
/*
+=
-=
/=
%=

for Bitwise operator too 
&=
<<=
>>=
|=
example 
first alloting values 
int a = 10, b=5,c=15;
int sum = 5;
now if sum = sum + a;
       15     5    10

  it can also be written as
      sum +=a;
      and 
if we want
sum = sum+a+b+c;
it can also be written in steps
sum += a;  or sum = sum + a;
sum += b;  or sum = sum + b;
sum += c;  or sum = sum + c;
*/

//Write down a program using compound assignment operator for multiplication
#include<iostream>
using namespace std;
int main(){
    int a=10,b=5,c=15;
    int prod=2, sum =5;
    prod *= a*b*c;
    sum += a+b+c;
    cout<<"new product is "<<prod<<endl;
    cout<<"new sum is "<<sum;
    return 0;
}