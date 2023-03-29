/*
//Write a class for student with
 1 Roll number
 2 Name 
 3 Marks in 3 subjects
 Function for 
 Total marks
 Grade(average<40 C,40 to 60 B, 60+ A)        
 and required methods
 */
#include<iostream>
#include<cstring>
using namespace std;

class Student 
{
    int roll;
    string name;
    int mmark;
    int pmark;
    int cmark;
    public:
        Student(int r,string n,int m,int p,int c )
        {
            roll=r;
            name =n;
            mmark=m;
            pmark=p;
            cmark=c;
        }
        
           
            int getRoll(){return roll;}
            string getName(){return name;}
            int total();
            char grade();
      
    
};
int main()
{
    int r,m,p,c;
    string n;
    cout<<"Enter roll number "<<endl;
    cin>>r;
    cout<<"Enter Name "<<endl;
    cin>>n;
    cout<<"Enter marks of all 3 subjects "<<endl;
    cin>>m>>p>>c;
    Student s(r,n,m,p,c);
    cout<<"welcome "<<s.getName()<<endl;
    cout<<"Your roll number is "<<s.getRoll()<<endl;
    cout<<"Total marks obtained are "<<s.total()<<endl;
    cout<<"Congratulations your grade obtained is "<<s.grade()<<endl;

    return 0;
}


int Student:: total()
{
    return mmark+pmark+cmark;
}
char Student :: grade()
{
    float average=total()/3;
    if(average>=40 && average <60)
    {
        return 'B';
    }
    else if(average>=60 && average<=100)
    {
        return 'A';
    }
    else if(average>=0 && average<40)
     {
         return 'C';
     }
}