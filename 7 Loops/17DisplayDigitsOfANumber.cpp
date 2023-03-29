//Displaying the digits of a number
/*
suppose the number is 1724 and we want all these numbers in reverse order
we can do it by 
1724%10=4; save it in r
then 1724/10=172 save it in number
and repeat the process

*/
//for loop
/*
#include<iostream>
using namespace std;
int main()
{
    int n,r=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(n;0<n;n=n/10)
    {
        r=n%10;
        cout<<r;
    }
    return 0;

}
*/
//using while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int r,n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        cout<<r;
    }
    return 0;
}
*/
//using do while loop
 #include<iostream>
 using namespace std;
int main()
{
    int r,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    do
    {
        r=n%10;
        n=n/10;
        cout<<r;
    } while (n>0);
    
    return 0;
}
