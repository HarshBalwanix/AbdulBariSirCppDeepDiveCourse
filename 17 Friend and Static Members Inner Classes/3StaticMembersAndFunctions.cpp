/*
//Static Members of a class 
class Test
{
    private:    
        int a;
        int b;
    public:
    static int count;
        Test()
        {
            a=10;
            b=10;
            count++;//this will be shared by all objects and will occupy memory only once
        }
        static int getcount()
                        {
                            return count;
                        }
};
int Test::count=0; //need to delcare 

 
int main()
{
    Test t1;
    Test t2; //t1 and t2 will have count shared
    cout<<t1.count //0
    cout<<t2.count; //0
    cout<<Test::count;//0, they can directly be accessed like this
    cout<<Test::getcount();
    t1.getcount();
    t2.getcount();
    return 0; 
}

//Static member function can access static members of a class they cannot access normal variable(non static)

*/