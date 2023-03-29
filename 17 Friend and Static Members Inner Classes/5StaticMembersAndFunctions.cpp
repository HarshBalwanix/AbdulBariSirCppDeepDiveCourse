/*
Example of static Member and function
class Car
{
    public:
        static int price;
        static int getprice()
        {
            return price;
        }
};
int Car::price=20;
int main()
{
    //we dont need to buy car to know its price, similarly we dont need to create object to know the price
    cout<<Car::getprice();
    //We can create a object also
    Car c;
    cout<<c.getprice()<<endl;
    return 0;
}
//Another Example
class Student
{
    public:
        int rollno;
        static int addminNo;
    Student()
    {
        addminNo++;
        rollno=addminNo;
    }
};
int Student::addminNo=0;

int main()
{
    Student s1,s2;
    
    return 0;
}
*/