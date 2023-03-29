// C++ program to add two numbers 
/* #include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    c = a+b;
    cout<<"addition is "<<c<<endl;
return 0 ;
}
*/ // working completely but for second example I commented the code
// To print name of the user 

/* #include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"May I know your name?"<<endl;
    cin>>a;
    cout<<"Welcome Dear "<<a;
    return 0;
}  
*/  // working completely but for second example I commented the code
// but here the problem is it will not read your full name like Harsh balwani, balwani will not be taken by it
// so to overcome this peoblem we use getline() instead of cin

#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"May I know your name?"<<endl;
    getline(cin,a);
    cout<<"Welcome Dear "<<a;
    return 0;
}
// this is the complete working code