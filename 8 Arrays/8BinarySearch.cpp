/*
it is only applicable if elements are sorted
low=0 and high =9 and key=25
int A[10] = {6,8,13,17,20,22,25,28,30,35}
mid = (l+h)/2 = (0+9)/2 = 4 that is 20
since 20 is less than key value so low will be changed to mid+1
now mid= (5+9)/2 = 7 that is 28;
since 28 is greater than key value so high will be changed to mid-1
mid=(5+6)/2= 5 that is 22 which is less than 25 so low value will be mid +1
therefore 
mid =(6+6)/2=6 that is 25 
which is the key value
now lets assumme key value to be 27 which is not present here
and all the steps till 25 will be same but after that since 27 is greater than 25 so mid+1
so l=7 and h=6
lower value is greater than higher one this implies that value is not present 
BInary search is faster because it take log(n) time if n time is being taken by linear search

*/
#include<iostream>
using namespace std;
int main()
{
    int l=0,h=9,key,mid;
    int A[]={6,8,13,17,20,22,25,28,30,35};
    cout<<"Enter key"<<endl;
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at "<<mid<<endl;
            return 0;
        }
        else if(key>A[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }

if(l>h)
{
    cout<<"not found"<<endl;
}
    return 0;
}