/*operators are pre defined in c++
Arithmatic operators = + - * / %
relational operators = < > <= >= == 
logical operators = && ! ::
Bitwise operators = & ^ ~ :
Increment/Decrement = ++ --
assignment operators =  =
.
.
.
.

* is called as astnik
a/b is a divided by b it will give quotient
a%b is a mod b it will give remainder 
example 13/5 will give 2
and 13%5 will give 3
imp note Mod operation is allowed in char and int only but not in float

how to get the floating point result if two integers are divided
 
by using typecasting we can do it for example
*/
/* 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    float c;
    a = 13;
    b = 5;
    c = (float)a/b; // here it is known as typecasting
    cout<<c<<endl;
    return 0;
}  */
//another example 
 /*
 #include<iostream>
using namespace std;
int main(){
    float a,b;
    float c;
    a = 13.5;
    b = 4.1;
    c = (float)a/b; // here it is known as typecasting
    cout<<c<<endl;
    return 0;
} */
#include<iostream>
using namespace std;
int main(){
    char a,b;
    char c;
    a = 13;
    b = 4;
    c = a%b; 
    cout<<c<<endl;
    return 0;
}
