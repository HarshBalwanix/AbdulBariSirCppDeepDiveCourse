//Reading  data from a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile("My.txt");
    // infile.open("My.txt");
    if(!infile.is_open()){cout<<"File cannot be opened"<<endl;}
    string str1,str2,str3;
    int i;
    infile>>str1;
    infile>>str2;
    infile>>i;
    infile>>str3;
    cout<<str1<<endl<<str2<<endl<<i<<endl<<str3<<endl;
    if(!infile.eof()) //Dont know the problem here
    {
        cout<<"File ended"<<endl;
    }
    infile.close();
    return 0;
}