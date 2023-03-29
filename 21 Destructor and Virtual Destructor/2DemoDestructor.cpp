/*
#include<iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"Constructor of Test"<<endl;
        }
        ~Test()
        {
            cout<<"Constructor of test destroyed"<<endl;
        }
};
void fun()
{
    Test t; 
   
}
int main()
{
    fun();
    
    return 0;

}

*/
/*
#include<iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"Constructor of Test"<<endl;
        }
        ~Test()
        {
            cout<<"Constructor of test destroyed"<<endl;
        }
};
void fun()
{
    Test *t=new Test(); //when you create a object dynamically in heap constructor of test is called and we need to use delete to use destructor of test
    delete t;
}
int main()
{
    fun();
    
    return 0;

}
*/

#include<iostream>
using namespace std;

class Test
{
    public:
    int *p;
        Test()
        {
            p=new int[10];
            cout<<"Constructor of Test"<<endl;
        }
        ~Test()
        {
            delete []p;
            cout<<"Constructor of test destroyed"<<endl;
        }
};
void fun()
{
    Test *t=new Test(); //when you create a object dynamically in heap constructor of test is called and we need to use delete to use destructor of test
    delete t;
}
int main()
{
    fun();
    
    return 0;

}