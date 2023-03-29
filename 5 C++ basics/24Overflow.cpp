/*
Overflow
As we know range of char is  -128 to 127
so it can store values in this range only but if we try increment its value after 127 it will goto -128
it is like a cycle
if the value is more than the range...it automatically takes up the value this is overflow. 
as 127 is written as 01111111 in binary form and we increase it by one then we will get 10000000 which is -128 in decimal form hence it is done

*/ 
#include<iostream>
using namespace std;
int main(){
    char x = 127;
    ++x;
    cout<<(int)x<<endl;
    --x;
    cout<<(int)x<<endl;
    return 0;
}