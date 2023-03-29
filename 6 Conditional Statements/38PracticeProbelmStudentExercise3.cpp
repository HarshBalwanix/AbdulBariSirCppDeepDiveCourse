/* Write a program to offer discounted amount on total bills
if bill amount <100 no discount
if bill amount >=100 && <500 10% discount
if bill amount  >=500 20% discount
*/
#include<iostream>
using namespace std;
int main()
{
    float shop,disc,total;
    cout<<"Enter raw amount"<<endl;
    cin>>shop;
    if(shop>=0 && shop<100)
    {
        cout<<"Eligible Discount is 0%"<<endl;
        disc = 0;
        total = shop;

    }
    else if(shop>=100 && shop<500)
    {
        cout<<"Eligible Discount is 10%"<<endl;
        disc = shop*(0.1);
        total = shop-disc;
    }
    else
    {
        cout<<"Eligible discount is 20%"<<endl;
        disc = shop*(0.2);
        total = shop-disc;
    }
    cout<<"Discount is "<<disc<<endl;
    cout<<"Amount to be paid is "<<total<<endl;
    return 0;
}