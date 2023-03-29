/*
#include<iostream>
using namespace std;
int main(){
    int a=10,b=5;
    if(true)
    {
        int c = a+b;
        cout<<c<<endl;
    }
    //cout<<c<<endl; //will not work here
    return 0;
}
*/
//OR there are two more methods which are quite impressive
/*
1
#include<iostream>
using namespace std;
int main(){
    int a=10,b=5;
    {      // declaraton of dummy brackets 
    int c = a+b;
    if(c>10)
    {
        
        cout<<c<<endl;
    }
    } // end of dummy brackets, variables declared inside will not work outside this bracket.
    //cout<<c<<endl; //will not work here
    return 0;
}
*/

/*
//2

#include<iostream>
using namespace std;
int main(){
    int a=10,b=5;
    if(int c = a+b; c>10) // this type of declaration is valid from c++ 17 onwards,dk why not working here
    {
        
        cout<<c<<endl;
    }
    //cout<<c<<endl; //will not work here
    return 0;
}
*/