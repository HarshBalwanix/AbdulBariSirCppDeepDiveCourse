/*
Using of vector
#vecotor header file
vector<int> V={10,20,30,40}; //data type need to mentioned and v is object 
v.push_back(25); //25 will be added at end
v.push_back(70); //70 will be added at end
v.pop_back(); //last element will be removed
//Iterate
for(int x:V) //for each loop for iteration
{
    cout<<x;
}
//using iterator class
vector<int>::iterator itr=V.begin(); //vector.begin() 

//or
vector<int>::iterator itr;
for(itr=V.begin();itr!=V.end();itr++)
{
    cout<<*itr; //itr is like a pointer to the elements
}

// for Linked list
list<int> V={10,20,30,40};
v.push_back(25); //25 will be added at end
v.push_back(70); //70 will be added at end 
list<int>::iterator itr; //for linkedlist
for(itr=V.begin();itr!=V.end();itr++)
{
    cout<<*itr; //itr is like a pointer to the elements
}

// for forward Linked list
v.push_back(25); //25 will be added at end
v.push_back(70); //70 will be added at end
forward_list<int> V={10,20,30,40}; 
forward_list<int>::iterator itr; //for linkedlist
for(itr=V.begin();itr!=V.end();itr++)
{
    cout<<*itr; //itr is like a pointer to the elements
}
*/