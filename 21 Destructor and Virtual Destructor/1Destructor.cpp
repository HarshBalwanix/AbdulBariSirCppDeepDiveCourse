/*
Destructor
Constructor is used for accquiring resources and destructor is used for releasing resources
class Test
{
    public:
        Test()
        {
            cout<<"test created";
        }
        ...
        ...
        ...
        ~Test() // ~ is till day and it is a destructor
        {
            cout<<"Test destroyed"<<endl;
        }
};
int main()
{
    Test *p=new Test(); // constructor called
    ..
    ..
    ..
    delete p; //destructor called
}




class Test
{
    public:
        int *p;
        ifstream fis;

        Test()
        {
            p=new int[10];
            fis.open("my.txt");
        
        }
        ~Test()
        {
            delete []p;
            fis.close();

        } 
};
*/