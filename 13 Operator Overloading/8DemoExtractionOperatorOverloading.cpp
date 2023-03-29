#include<iostream>
using namespace std;
class Student
{
        public:
        int id;
        char name[20];
             Student(int i=0,char n='a')
             {
                    int id=i;
                    char name=n;
             }
            friend istream & operator>>(istream &i,Student &s); //here s is also reference 
            friend ostream & operator<<(ostream &o,Student &s);
};
        istream & operator>>(istream &i,Student &s)
        {
            cout<<"Enter student id and name ";
            i>>s.id>>s.name;
        }
        ostream & operator<<(ostream &o,Student &s)
        {
            o<<"Id "<<s.id<<endl<<" Name "<<s.name;
            return o;
        }
int main()
{
    Student s;
    cin>>s;
    cout<<s;
    return 0;
}