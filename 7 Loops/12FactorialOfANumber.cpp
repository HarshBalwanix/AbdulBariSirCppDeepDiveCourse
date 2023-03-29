//Factoroial of a number using while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int fact=1,i=1,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while (i<=n)
    {
        fact= fact*i;
        ++i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}
*/
//factorial of a number using do while loop
#include<iostream>
using namespace std;
int main()
{
    int fact=1,i=1,n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    do
    {
        fact=fact*i;
        i++;
    }
    while(i<=n);
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}