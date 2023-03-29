/*
Friend functions 
class Test 
{
    private:
            int a;
    protected:
            int b;
    public:
            int c;
    friend void fun(); //friend function
};

void fun() //global member 
{
    Test t;
    t.a=15;
    t.b=10;
    t.c=5;
}


Friend classes(if you want one class to access private members of other class you use friend class)
class Your; //decalration  is required first
class My
{
    private:
        int a=10;
        friend your;
        };
class Your
{
    public:
        My m;
        void fun()
        {
            cout<<m.a;
        }
};



*/