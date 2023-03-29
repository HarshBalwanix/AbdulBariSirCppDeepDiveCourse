/*
Parameter passing methods
1. Pass by value //Call by value
2. Pass by address //Call by address
3. Pass by Reference //Call by reference
for eg.
void swap(int a, int b) // a and b are formal perameters 
{
    int temp;
    temp =a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;  // x and y are real parameters
    swap(x,y);      
    cout<<x<<<" "<<y<<endl;
}
//This code is call by value but it is not suitable for swap function as it will save it in temporary mode only

*/