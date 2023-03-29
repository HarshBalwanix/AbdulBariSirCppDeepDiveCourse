//write a program to find area of any triangle
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,s,area;
    cout<<"enter all the three sides of triangle"<<endl;
    cin>>a>>b>>c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area of triangle is "<<area<<endl;
    return 0;

} */
/*

//Write a program to find area and perimeter of rectangle
#include<iostream>
using namespace std;
int main(){
    float b,l,area,perim;
    cout<<"Enter all the breadth and length"<<endl;
    cin>>b>>l;
    area = l*b;
    cout<<"Area of rectangle is "<<area<<endl;
    perim = 2*(l+b);
    cout<<"perimeter of rectangle is "<<perim<<endl;
    return 0;
}
*/

//Write a program in C++ to calculate the volume of a sphere.
/*
#include<iostream>
using namespace std;
int main(){
    float r,volume;
    cout<<"Enter the radius of sphere "<<endl;
    cin>>r;
    volume=(4*r*r*r)/3;
    cout<<"The volume of sphere is "<<volume<<endl;
    return 0;
}
*/

 // Write a program in C++ to calculate the volume of a cube.
/*

#include<iostream>
using namespace std;
int main(){
    float a,volume;
    cout<<"enter edge of a cube "<<endl;
    cin>>a;
    volume=a*a*a;
    cout<<"The volume of cube is "<<volume<<endl;
    return 0;
}
*/

// Write a program in C++ to calculate the volume of a cylinder.
/*
#include<iostream>
using namespace std;
int main(){
    float r,h,volume;
    cout<<"Enter radius and height of a cylinder "<<endl;
    cin>>r>>h;
    volume=3.14*r*r*h;
    cout<<"The volume of cylinder is "<<volume<<endl;
    return 0;
}
*/

//Write a program in C++ to find the area and circumference of a circle.
/*
#include<iostream>
using namespace std;
int main(){
    float r,area,circumference;
    cout<<"Enter radius of a circle "<<endl;
    cin>>r;
    area=3.14*r*r;
    cout<<"The area of circle is "<<area<<endl;
    circumference = 2*3.14*r;
    cout<<"The circumference of circle is "<<circumference<<endl;
    return 0;
}
*/

// Write a program in C++ to convert temperature in Celsius to Fahrenheit and kelvin.
/*
#include<iostream>
using namespace std;
int main(){
    float tempc,tempf,tempk;
    cout<<"Enter temperature in Celsius "<<endl;
    cin>>tempc;
    tempf= (tempc*1.8) +32;
    tempk= tempc+273.15;
    cout<<"The temperature in fahrenhite is "<<tempf<<endl;
    cout<<"The temperature in kelvin is "<<tempk<<endl;
    return 0;
}
*/

//Write a program in C++ to convert temperature in Fahrenheit to Celsius and kelvin.
/*
#include<iostream>
using namespace std;
int main(){
 float tempc,tempf,tempk;
 cout<<"enter temperature in farhenite"<<endl;
 cin>>tempf;
 tempc = ((tempf-32)*5)/9;
 tempk = tempc + 273.15;
 cout<<"Temperature in celcius is "<<tempc<<endl;
 cout<<"Temperature in kelvin is "<<tempk<<endl;
    return 0;
}
*/

//Write a program in C++ to find the third angle of a triangle.
/*
#include<iostream>
using namespace std;
int main(){
 float Fangle,Sangle,Tangle;
 cout<<"enter first two angles of triangle in degrees"<<endl;
 cin>>Fangle>>Sangle;
 Tangle= 180 -(Fangle+Sangle);
 cout<<"Third angle of trianngle is "<<Tangle<<endl;
    return 0;
}
*/

//Write a program in C++ that converts kilometers per hour to miles per hour.
// 1km = 0.62miles
/*
#include<iostream>
using namespace std;
int main(){
 float kph,mph;
 cout<<"enter speed in kilometres per hour"<<endl;
 cin>>kph;
 mph= kph*0.62;
 cout<<"speed in Mph is "<<mph<<endl;
    return 0;
}
*/

//Write a program in C++ to find the area of Scalene Triangle.  // nice one
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
 float flength,slength,angle,area;
 cout<<"enter lengths of two sides of triangle and angle between them"<<endl;
 cin>>flength>>slength>>angle;
 area = (flength*slength*sin((angle*3.14)/180))/2;
 cout<<"Area of scalene Triangle is "<<area<<endl;
    return 0;
}
*/

//Write a program in C++ to compute the total and average of four numbers.
/*
#include<iostream>
using namespace std;
int main(){
 float a,b,c,d,sum,avg;
 cout<<"enter the four numbers"<<endl;
 cin>>a>>b>>c>>d;
 sum = a+b+c+d;
 avg = sum/4;
 cout<<"Total sum of these numbers is "<<sum<<endl;
 cout<<"Average of these numbers is "<<avg<<endl;
    return 0;
}
*/


//Write a program in C++ to compute quotient and remainder.
/*
#include<iostream>
using namespace std;
int main(){
 int a,b,quot,rem;
 cout<<"enter the divident"<<endl;
 cin>>a;
 cout<<"enter the divisor"<<endl;
 cin>>b;
 quot = a/b;
 rem = a%b;
 cout<<"quotient is "<<quot<<endl;
 cout<<"Remainder is "<<rem<<endl;
    return 0;
}
*/

/* Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows. Go to the editor
Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5  5
5  5
5  5
5  5
5555
*/

/*
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a single digit number "<<endl;
    cin>>a;
    cout<<a<<a<<a<<a<<endl;
    cout<<a<<" "<<" "<<a<<endl;
    cout<<a<<" "<<" "<<a<<endl;
    cout<<a<<" "<<" "<<a<<endl;
    cout<<a<<" "<<" "<<a<<endl;
    cout<<a<<a<<a<<a<<endl;
    return 0;
}
*/


