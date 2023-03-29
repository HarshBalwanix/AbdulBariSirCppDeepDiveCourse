/*
#include<iostream>
using namespace std;
int main()
{
    int A[5] = {3,4,2,5,};
    // for(int i=0;i<5;i++)
    // {cout<<A[i]<<endl;
    // }
    for(int x : A)    //for each loop very useful for arrays
        {cout<<x<<endl;
        }

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    float A[5] = {2.5,5.3,2,5,};
    // for(int i=0;i<5;i++)
    // {cout<<A[i]<<endl;
    // }
    for(auto x : A)    //for each loop , we can use auto here as it will not require to know the datatype of array
        {cout<<x<<endl;
        }

    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    char A[5] = {'A',66,'C',68,};
    // for(int i=0;i<5;i++)
    // {cout<<A[i]<<endl;
    // }
    for(int x : A)    //for each loop very useful for arrays
    
        {cout<<x<<endl; // int values
        }
    for(auto x :A) // char values
    {
        cout<<x<<endl;
    }
    return 0;
}