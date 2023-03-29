//Preprocessor Directives
/*
//#define  
#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.1425
int main()
{
    float area;
    int radius;
    cout<<"Enter radius"<<endl;
    cin>>radius;
    area=PI*pow(radius,2);
    cout<<"Area of circle is "<<area<<endl;
    return 0;
}
*/
/*
//defining function
#include<iostream>
using namespace std;
#define PQ(x) (x*x)
int main()
{
    float a;
    cout<<" Enter edge of square "<<endl;
    cin>>a; 
    cout<<"Area of Square is "<<PQ(a)<<endl;
    return 0;
}
*/

/*
//if not defined
#include<iostream>
using namespace std;
#define PI 3.1425
#ifndef PI
    #define PI 3 //if PI is not defined then it will be used
 #endif 
int main()
{
    cout<<PI<<endl;
    return 0;
}
*/


//Parameter to string 
#include<iostream>
using namespace std;
#define MSG(x) #x //will take parameter x as string
int main()
{
    cout<<MSG(HEllo There!)<<endl;
    return 0;
}