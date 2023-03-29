/*
Run time polymorphism
very important 


Example 
class Car
{
   public:
        virtual  void start()=0; //pure virtual function
        // {
        //     cout<<"Car started "<<endl;
        // } 
        virtual void stop()=0; //pure virtual function 
        // {
        //     cout<<"Car stopped "<<endl;
        // }
};


class Innova:public Car
{
    public:
        void start()
        {
            cout<<"Innova started "<<endl;
        }
        void stop()
        {
            cout<<"Innova stopped "<<endl;
        }
};


class Swift:public Car
{
    public:
        void start()
        {
            cout<<"Swift started "<<endl;
        }
        void stop()
        {
            cout<<"Swift stopped "<<endl;
        }
};

int main()
{
    Car *c=new Innova();
    c->start(); //innova started
    Car *c=new Swift();
    c->start(); //swift started
    return 0;
}
*/
