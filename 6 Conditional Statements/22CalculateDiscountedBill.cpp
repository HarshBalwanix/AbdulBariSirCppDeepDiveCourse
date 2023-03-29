/*
Create a program in C++ that will calculate and print the price to be paid, after applying the discount (if any) based on the total purchase amount done/entered by user (at run-time).
 The discount must be offered based on the total shopping amount as shown in the table given below:

Total Shopping Amount	Discount
<=100	                No discount
>100 & <=200	        5%
>200 & <=400	        10%
>400 & <=800	        20%
>800	                25%

*/
#include<iostream>
using namespace std;
int main()
{
    float price,discount,total;
    cout<<"Enter the total shopping amount"<<endl;
    cin>>price;
    if(price<=100 && price>0)
    {
        cout<<"Your total bill amount to be paid is "<<price<<" in rupees"<<endl;
    }
    else
    { 
        if(price>100 && price<=200)
        {
            discount=(price)*(0.05);
            cout<<"Your discount is "<<discount<<endl;
            total = price - discount;
            cout<<"Your total bill after deducting 5 percent discount is "<<total<<" in rupees"<<endl;
        } 
        else if(price>200 && price<=400)
        {
            discount=(price)*(0.10);
            cout<<"Your discount is "<<discount<<endl;
            total = price - discount;
            cout<<"Your total bill after deducting 10 percent discount is "<<total<<" in rupees"<<endl;
        } 
        else if(price>400 && price<=800)
        {
            discount=(price)*(0.20);
            cout<<"Your discount is "<<discount<<endl;
            total = price - discount;
            cout<<"Your total bill after deducting 20 percent discount is "<<total<<" in rupees"<<endl;
        } 
        else if(price>800 )
        {
            discount=(price)*(0.25);
            cout<<"Your discount is "<<discount<<endl;
            total = price - discount;
            cout<<"Your total bill after deducting 25 percent discount is "<<total<<" in rupees"<<endl;
        } 
        else
        {
            cout<<"Enter valid amount"<<endl;
        }
    }
    return 0;
}