#include<iostream>
using namespace std;
class BasicCar
{
    public:
       virtual void start(){
            cout<<"Basic Car started "<<endl;
        }
};
class AdvCar:public BasicCar
{
    public:
        void start()
        {
            cout<<"Advanced car started "<<endl;
        }
};
int main()
{
    BasicCar *p=new AdvCar;
    // p->start();//  will return "Basic Car started " if we didnt make the basic function virtual
    p->start();//  will return "Advanced Car started " if we made the basic function virtual
    return 0;
}