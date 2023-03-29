//demo map classes
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m; //int type key and value is string and m is object
    m.insert(pair<int,string>(1,"John"));
    m.insert(pair<int,string>(2,"Harsh"));
    m.insert(pair<int,string>(3,"Ravi"));
    map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl; //this is the format
    }
    map<int,string>::iterator itr1;
    itr1=m.find(2);
    cout<<"value found is "<<endl;
    cout<<itr1->first<<" "<<itr1->second<<endl;
    return 0; 
}