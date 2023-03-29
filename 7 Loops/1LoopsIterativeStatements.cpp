/*
Loops are used for repeatedly executing statements 
4 types of loops

1 while 
2 do while 
3 for 
4 for each

while and do while 

while(<condition>)
{
    process;               //if condition is true it will  execute untill condition is true
}

                           
do
{
    process;               // first process will be executed then while will check if it is true and if it is true it will execute the process again untill it becomes false
}
while(<condtion>);    



For example 
printing n numbers program

*/

//Using only while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int num,i=0;
    cout<<"Enter the last digit "<<endl;
    cin>>num;
    while(i<=num )
    {
        cout<<i<<endl;
        ++i;
    }
    
    
    return 0;
}
*/
//OR


//do while
#include<iostream>
using namespace std;
int main()
{
    int num,i=0;
    cout<<"Enter the last digit "<<endl;
    cin>>num;
    do
    {
        cout<<i<<endl;
        ++i;
    }
    while(i<=num );
    
    return 0;
}
