/*

//Vector iterator 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V={10,20,30,40};
    V.push_back(25);
    V.push_back(70);
    V.pop_back();
    // V.insert(1,2);
    //using for each loop 
    cout<<endl;
    for(int x:V)
    {
        cout<<x<<" ";
    }
    //using iterator
vector<int>::iterator itr;
for(itr=V.begin();itr!=V.end();itr++)
{
    cout<<*itr<<" "; //can modify vaue by using inccrement decrement operator
}
    return 0;
}
*/
/*
//linked list 
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l ={2,4,6,8,10};
    l.push_back(12);
    l.push_back(14);
    l.pop_back();
    list<int>::iterator itr;
    for(itr=l.begin();itr!=l.end();itr++)
    {
        cout<<*itr<<endl;
    }
    return 0;
}
*/
//Similarly we can do for forward list too

/*
//Forward linked list 


#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> fl ={2,4,6,8,10};
    fl.push_front(12); //12 added in front most
    fl.push_front(14); //14 added in front most
    fl.pop_front(); //14 removed as it was the front most
    forward_list<int>::iterator itr;
    for(itr=fl.begin();itr!=fl.end();itr++)
    {
        cout<<*itr<<endl;
    }
    return 0;
}
*/
//set 
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s ={2,4,6,8,10,10}; //two times 10 is here,but set gives unique element so it will be given only once in output
    s.insert(12);
    s.insert(14);
    set<int>::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<endl;
    }
    s.erase(14); //deleting 14
    for(int x:s)
    {
        cout<<x<<" ";
    }
    return 0;
}
