/*
for loop // used when you know the number of times you want to use  

syntax
for(initialisation; condition;updation) //1st step is initialisation then 2nd is condition if it is true then it will proceed further 3rd is updation then 4th is contion 5th is updation and so on untill condition becomes false
{
    process;
}
Flowchart attached
*/
//Print n numbers using for loop
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(i=1;i<=num;++i)
    {
        cout<<i<<endl;
    }
    return 0;
}