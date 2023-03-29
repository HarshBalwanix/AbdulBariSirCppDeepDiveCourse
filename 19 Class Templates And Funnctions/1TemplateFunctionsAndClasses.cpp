/*
Templates
example 
template<class T>
T maximum(T x, T y)
{
    return x>y?x:y;
}
maximum(10,5);
maximum(12.5,34.5);



Another Example for mutiple datatypes
template<class T, class R>
void add(T x, T y)   here class T will be double and class R will be integer
{
    cout<<x+y;
}
add(12.5,23);


Using Templates in class

class Stack
{
    private:
            int s[10];
            int top;
        public:
            void push(int x);
            int pop();
            
};
but this class was just for integer 
we can modify the same class for all types of datatypes

template<class T>
class Stack
{
        private:
            T s[10];
            T top;
        public:
            void push(T x);
            T pop();
};
template<class T>
void Stack<T>::push(T x) //outside the class so writing template again
{
---
---
}
template class<T>
T Stack<T>::Pop()
{
    --
    --
}
int main()
{
    Stack<int> s1;
    Stack<float> s2;
}
*/