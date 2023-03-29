//normal enum
/*
#include<iostream>
using namespace std;
enum day {mon,tue,wed,thu,fri,sat,sun};
int main(){
    day d;
    d = wed;
    cout<<d<<endl;
    cout<<fri<<endl;
    return 0;
} */

/*
//enum starting with 1
#include<iostream>
using namespace std;
enum day {mon=1,tue,wed,thu,fri,sat,sun};
enum menu {NEW=10,open,close,save,back}; 
enum departments  {CS=1,ECE,IT=23,MECHANICAL,CIVIL=99,AI};
int main(){
    day d;
    d = mon;
    cout<<d<<endl;
    cout<<fri<<endl;

    menu m;
    m =NEW;
    cout<<m<<endl;
    cout<<save<<endl;

    departments de;
    de = CS;
    cout<<CS<<endl;
    cout<<ECE<<endl;
    cout<<IT<<endl;
    cout<<MECHANICAL<<endl;
    cout<<CIVIL<<endl;
    cout<<AI<<endl;

    return 0;
}

*/

//typedef 
// purpose is to make program more readable
#include<iostream>
using namespace std;
typedef int marks;
int main(){
    marks m1,m2; // here we used typedef as it is storing int values of marks m1 and m2
    m1=50;
    m2=49;
    cout<<m1<<" "<<m2<<endl;
    return 0;
} 
