//Drawing Pattern 2
/*
expected output
*
**
***
****
*/
/*
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
//Another pattern
/*
expected output
****
 ***
  **
   *
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i>j)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    return 0;
}