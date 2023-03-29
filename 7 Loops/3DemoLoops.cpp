//Demo of all loops 
//while loop 
/*
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the digit "<<endl;
    cin>>num;
    { int i=0;
    while(i<=num)
    {
        cout<<"hello"<<endl;
        ++i;
    }
    }
    return 0;
}
*/

// Do while loop 

/*
#include<iostream>
using namespace std;
int main()
{
    int num,i=0;
    cout<<"Enter the digit"<<endl;
    cin>>num;
    do
    {
        cout<<"hello"<<endl;
        ++i;
    } 
    while (i<=num);
    return 0;
}

*/

//for loop
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the digit "<<endl;
    cin>>num;
    for(i=0;i<=num;++i)
    {
        cout<<"hello"<<endl;
    }
    return 0;
}