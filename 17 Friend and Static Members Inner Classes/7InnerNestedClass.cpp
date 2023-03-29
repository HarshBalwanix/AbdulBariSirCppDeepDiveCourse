/*
inner nested class 
class Outer
{
    public:
        int a=10;
        static int b;
        void fun()
        {
            cout<<i.show()<<endl;
        }
        class Inner //Inner class 
        {
            public:
                int x=25;
                void show()
                {
                    cout<<"Show"<<endl;
                    cout<<a<<endl; //not accessible as inner class can access static members only
                    cout<<b<<endl; //accessible as inner class can access static  members
                }
        };
        Inner i; //Declaration of object and outer class can access public members of inner class now

};
int Outer::b=20;


//Example
class LinkedList
{
    class Node
    {
        int data;
        Node *next; 
    };
    Node *Head;
};
*/