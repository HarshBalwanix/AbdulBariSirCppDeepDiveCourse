/*
Create a class for Stack with Exceptions
1 StackOverflow
2 StackUnderflow
*/
#include<iostream>
using namespace std;
class StackOverflow:exception{};
class StackUnderflow:exception{};

class Stack 
{
    private:
        int *stk;
        int top=-1;
        int size;
        public:
            Stack(int sz)
            {
                size =sz;
                stk=new int[size];
            }
            void push(int x)
            {
               try
               { if (top==size-1)
                throw StackOverflow();
                top++;
                stk[top]=x;
                cout<<"Added to stack : "<<x<<endl;
               }
               catch(StackOverflow e)
               {
                   cout<<"Stack overflown, you have exceeded the size"<<endl;
               }

            }
            int pop()
            {
                try
               {
                    if (top==-1)
                
                    throw StackUnderflow();
                    cout<<"Popped from stack :"<<stk[top]<<endl;
                    return stk[top--];
                
               }
               catch(StackUnderflow e)
               {
                   cout<<"Stack underflown, you are trying to pop from an empty stack"<<endl;
               }
            }
};
int main()
{
    Stack s(5);
    s.pop();
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(8);
    s.pop();
    s.pop();
}