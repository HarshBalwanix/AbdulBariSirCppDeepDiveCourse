/*
Write a class for Employee
Derived classes
1 Fulltime Employee with Salary
2 Part time Employee with Daily Wages
Write required methods
*/
#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
    private:
        int eid;
        string name;
    public:
        Employee(int e,string n)
        {
            eid=e;
            name=n;
        }
        int geteid()
        {
            return eid;
        }
        string getname()
        {
            return name;
        }
};
class Femployee:public Employee
{
    private:
        int salary;
        public:
        Femployee(int e,string n,int s):Employee(e,n)
        {
            salary=s;
        }
        int getsalary()
        {
            return salary;
        }

};
class Pemployee:public Employee
{
    private:
        int wage;
    public:
        Pemployee(int e,string n,int w):Employee(e,n)
        {
            wage=w;
        }
    
        int getwage()
        {
            return wage;
        }

};
int main()
{   
    Femployee f(01,"Raj",5000);
    cout<<"Salary of Employee Id "<<f.geteid()<<" namely "<<f.getname()<<" is "<<f.getsalary()<<endl;
    Pemployee p(02,"John",300);
    cout<<"Daily wage of Employee Id "<<p.geteid()<<" namely "<<p.getname()<<" is "<<p.getwage()<<endl; 
    return 0;
}