/*
#include<iostream>
using namespace std;
int main()
{
    if(true)
    {
        cout<<"Hello"<<endl;
    }
    else
    {
        cout<<"Bye"<<endl;
    }
    return 0;
}
*/
//Validation of roll numbers
#include<iostream>
using namespace std;
int main()
{
    int roll_no;
    cout<<"enter Roll number"<<endl;
    cin>>roll_no;
    if(roll_no<1)
    {
        cout<<"Invalid Roll number"<<endl;
    }
    else
    {
        cout<<"Valid Roll number"<<endl;
    }
    return 0;
}