//Arithmetics on pointers
/*
only 5 arithmetic operations are allowed using pointers
1 p++; //this will make the location 1 step back from current location of p
2 p--; //this will make the location 1 step back from current location of p
3 p=p+2; //this 2 will make the location 2steps forward from current location of p
4 p=p-2; // this 2 will make the location 2steps backward from current location of p
5 d=q-p; // this d is distance between two pointers
*/
#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A;
     p++;
    cout<<p<<endl;
    p--;
    cout<<p;
    return 0;
}