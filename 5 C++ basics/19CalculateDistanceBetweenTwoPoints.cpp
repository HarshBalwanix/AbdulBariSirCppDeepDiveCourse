//Calculate distance between two points
#include<iostream>
#include<math.h>
using namespace std;
int main(){  
    float distance;
    int x1,y1,x2,y2;
    cout<<"enter cordinates of first points by writing x before y  "<<endl;
    cin>>x1>>y1;
    cout<<"enter cordinates of seconds points by writing x before y  "<<endl;
    cin>>x2>>y2;
    distance = sqrt(pow(x2-x1,2) +pow(y2-y1,2));
    cout<<"Calculated distance is "<<distance<<endl;
    return 0;
}