/*
Serialization is process of storing and retriving state of an object 
we need to store info of a student and then we need to retrieve it from a file too
*/
//Demo 
#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        string branch;
        friend ofstream & operator <<(ofstream &outfile,Student &s);
        friend ifstream & operator>>(ifstream &infile,Student &s);
};
// Writing 
 ofstream & operator <<(ofstream &outfile,Student &s)
{
    outfile<<s.name<<endl;
    outfile<<s.roll<<endl;
    outfile<<s.branch<<endl;
    return outfile;
}
 ifstream & operator>>(ifstream &infile,Student &s)
 {
     infile>>s.name>>s.roll>>s.branch;
     return infile;
 }
int main()
{
    Student s1;
    s1.name="Harsh";
    s1.roll=6;
    s1.branch="CSE";
    ofstream outfile("Student.txt",ios::trunc);
    // outfile<<s1.name<<endl;
    // outfile<<s1.roll<<endl;
    // outfile<<s1.branch<<endl;
    //instead of writing all these,we can overload extraction operator and directly save the object itself
    outfile<<s1;
    outfile.close();
    //Reading 
    ifstream infile;
    infile.open("Student.txt");
    infile>>s1; //overloaded insertion operator
    cout<<s1.name<<" "<<s1.roll<<" "<<s1.branch<<endl;
    infile.close();
    return 0;
}