/*
#include<iostream>
using namespace std;
int main(){
    int x=11,y=7,z;
   // z = x&y;
   //z = x | y;
// z = x ^ y;
    // z = x<<1; 
    z = x>>1; 
    cout<<z<<endl;
    return 0;
}

*/
//For char 
#include<iostream>
using namespace std;
int main(){
    char x=20,y;
    //y=x>>1;
    //y=x<<1;
    y = ~x;
    cout<<(int)y<<endl;
    return 0;
}