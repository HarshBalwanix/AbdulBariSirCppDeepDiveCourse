//How to write in a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("My.txt"); //ios::trunc
    outfile<<"Hello"<<endl;
    outfile<<"Harsh"<<endl;
    outfile<<25<<endl;
    outfile<<"cs";
    outfile.close();
    return 0;
}