//Write a program to calculate sum of first n natural numbers.

#include<iostream>
using namespace std;
int main(){
    //sum of first n natural numbers s = n*(n+1)/2
    int n;
    float sum;
    cout<<"enter the term upto which you want sum"<<endl;
    cin>>n;
    sum = n*(n+1)/2;
    cout<<"Sum upto "<<n<<" terms is "<<sum; 
    return 0;
}

