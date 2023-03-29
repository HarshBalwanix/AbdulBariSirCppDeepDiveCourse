//SUm of first n natural numbers using while loop
 /*
 #include<iostream>
 using namespace std;
 int main()
 {
     int sum=0 ,i=1 ,n;
     cout<<"Enter the term"<<endl;
     cin>>n;
     while(i<=n)
     {
         sum = sum+i;
         ++i;
     }
     cout<<"sum is "<<sum<<endl;
     return 0;
 }
 */

 //SUm of first n natural numbers using do while loop
 #include<iostream>
 using namespace std;
 int main()
 {
     int sum=0,i=1,n;
     cout<<"ENter the term"<<endl;
     cin>>n;
     do
     {
        sum =sum+i;
        ++i;
     } 
     while (i<=n);
     cout<<"the sum is "<<sum<<endl;
     return 0;
 }