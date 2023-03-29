//Demo
/*
#include<iostream>
using namespace std;
class Innova
{
    public:
        static int price;
        static int getprice()
        {
            return price;
        }
};
int Innova::price=20;
int main()
{
     cout<<Innova::price<<endl;
     Innova i1,i2;
     cout<<i1.price<<endl;
     cout<<i2.price<<endl;
     cout<<i1.getprice()<<endl;
     cout<<i2.getprice()<<endl;

    return 0;
}
*/
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    public:
        int rollNo;
        static int admNo;
        string name;
        Student(string n)
        {
            name=n;
            admNo++;
            rollNo=admNo;
        }
        int display()
        {
            cout<<"Name "<<name<<" Roll no "<<rollNo<<endl;
        }
};
int Student::admNo=0;

int main()
{
    Student s1("Harsh");
    Student s2("Aneesh");
    Student s3("Priyasha");
    Student s4("Priyasha");
    s1.display();
    s2.display();
    s3.display();
    cout<<"Number of admissions are "<<Student::admNo;
    return 0;
}