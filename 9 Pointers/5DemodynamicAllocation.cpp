/*
#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    p[0]=12;
    p[1]=13;
    delete []p;
    p=nullptr;
    cout<<p[1];
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter number of elements"<<endl;
    cin>>size;
    int A[size]; //in stack memeory
    //after storing size we can not create another array in A
 
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int *p=new int[20]; //in heap memory 
    delete []p;  
    p=new int[40];//can use same pointer for both the arrays after deleting one 
 
    return 0;
}
