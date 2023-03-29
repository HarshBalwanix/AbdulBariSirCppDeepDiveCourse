/*
<<cout overloading ostream
>> cin overloading  istream 
combination of istream and ostream is iostream 
class Student
{
    int id;
    char name[20];
    public:
    Student(int i=0,char n)
    {
        name =n;
        id=i;
    }
        friend istream & operator>>(istream & in, Student &s);
        friend ostream & operator<<(ostream &o,Student s);
};
    istream  & operator>>(istream &in, Student &s)
    {
        cout<<"Enter student id name ";
        in>>s.id>>s.name;
    }
    ostream & operator<<(ostream &o, Student s)
    {
        o<<"id "<<s.id<<endl;
        o<<"Name "<<s.name<<endl;
        return o;
    }
int main()
{
    Student s1;
    cin>>s1;
    cout<<s1;
    return 0;
}
*/