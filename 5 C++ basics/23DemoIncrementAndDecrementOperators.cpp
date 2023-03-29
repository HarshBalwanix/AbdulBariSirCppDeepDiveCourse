// demo increment decrement 
#include<iostream>
using namespace std;
int main(){
    int i = 5,j;
    i++;
    cout<<i<<endl;
    ++i;
    cout<<i<<endl;
    j  = 2* ++i + 2* i++;   // Result may vary
    cout<<i<<" "<<j<<endl;
    return 0;
}