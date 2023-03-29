//Demo Template Classes
#include<iostream>
using namespace std;
template<class T>
class Stack
{
    private:
        int top;
        T *stk;
        int size;
    public: 
        Stack(int sz)
        {
            size=sz;
            top=-1;
            stk=new T[size];
        }
        int push(T x);
        T pop();
};
template<class T>
int Stack<T>::push(T x)
{
    if(top==size-1)
        cout<<"Stack is full";
    else
    {
        top++;
        stk[top]=x;
    }
}
template<class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
     cout<<"stack is empty"<<endl;
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}


int main()
{
    Stack<int> s(10);
    s.push(10);
    s.push(23);
    s.push(21);
    s.push(1);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    Stack<float> s1(5);
    s1.push(21.4f);
    s1.push(21.4f);
    s1.push(21.4f);
    s1.pop();
    return 0;
}