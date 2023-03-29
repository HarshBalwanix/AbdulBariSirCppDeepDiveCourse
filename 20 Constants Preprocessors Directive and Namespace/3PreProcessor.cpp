/*
preporcessor Directives/Macros
Example
//Symbolic Constants
#define PI 3.1425
#define c cout
int main()
{
    cout<<PI<<endl; //3.1425
    c<<2<<endl;
    return 0;
}
??Symbolic Functions
#define SQR(x) (x*x)
#define MSG(x) #x //convert parameter into string gives "x"
int main()
{
    cout<<SQR(5)<<endl; //25
    cout<<MSG(Hello); //"Hello"
    return 0;
}
//if not defined
#ifndef  //if not defined
 #define PI 3.1425
 #endif
*/
