
/*
#include<iostream>
using namespace std;
int main()
{
    int num,i=0;  //initialising i here 
    cout<<"Enter digit "<<endl;
    cin>>num;
    for(;i<=num;) //we can leave it like this its completely ok, 
    {
        cout<<"Hello\n";
        ++i;

    }
    return 0;
}
//Above code is absolutely correct but 1 mistake will make it infinite loop
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int num,i=0;  //initialising i here 
    cout<<"Enter digit "<<endl;
    cin>>num;
    for(;i<=num;) //here it became infinte loop as we have not given updation to i and i is always less than n  
    {
        cout<<"Hello\n";

    }
    return 0;
}
*/
//We can also do it like this
#include<iostream>
using namespace std;
int main()
{
    int num,i=0;  //initialising i here 
    cout<<"Enter digit "<<endl;
    cin>>num;
    for(;;) //we can leave it like this its completely ok, 
    {
        cout<<"Hello\n";
        ++i;
        if(i>num) //it is defining a condition here
        break;

    }
    return 0;
}