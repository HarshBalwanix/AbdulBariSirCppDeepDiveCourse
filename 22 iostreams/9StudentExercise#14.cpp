/*
Write a program to store an retrieve list of item in a file 
Use serialization 
Class 
1Name 
2Price
3Quantity
*/
#include<iostream>
#include<fstream>
using namespace std;
class Bucket
{
    public:
        string name;
        int price; 
        int quantity;
        friend ofstream & operator<<(ofstream &outfile,Bucket &b);
        friend ifstream & operator>>(ifstream &infile,Bucket &b);
};
ofstream & operator<<(ofstream &outfile,Bucket &b)
{
    outfile<<b.name<<endl;
    outfile<<b.price<<endl;
    outfile<<b.quantity<<endl;
    return outfile;
}

ifstream & operator>>(ifstream &infile,Bucket &b)
{
    infile>>b.name>>b.price>>b.quantity;
    return infile;
}
int main()
{
    Bucket b;
    b.name="Mug";
    b.price=30;
    b.quantity=2;
    ofstream outfile("list.txt");
    outfile<<b;
    outfile.close();
    ifstream infile("list.txt");
    infile>>b;
    cout<<"Name "<<b.name<<endl<<"Price "<<b.price<<endl<<"Quantity "<<b.quantity<<endl;
    return 0;
}