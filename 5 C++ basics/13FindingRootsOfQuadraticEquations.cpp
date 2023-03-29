#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    float x1,x2;
    cout<<"Assume the quadratic equation to be ax**2 + bx + c = 0, enter a, b, c, to get the roots "<<endl;
    cin>>a>>b>>c;
    x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    cout<<"First root is "<<x1<<endl;
    x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    cout<<"Second root is "<<x2<<endl;
    return 0;
    
}