/*
Constant 



#define x 10; // we can declare it like this too but this will not occupy memory in compilation time and it is global

main()
{
   const int x=10; //constant identifier 
    x++; //cant do this,this will show an error
    cout<<x<<endl;
}



Constant Pointers
int main()
{
    int x=10;
  const  int *ptr=&x;//  or we can write it as int const *ptr=&x;
    ++ *ptr; //not allowed
    cout<<x<<endl;
    cout<<*ptr<<endl;//can read and give output as 10
    int y =20;
    ptr=&y; //yes this is allowed 
    ++(*ptr);//cannot modify  
} 


Constant pointers 
int main()
{
    int x=10;
    int *const ptr=&x; //now it is a constant pointer assigned to just x
    ++(*ptr);//can modify it
    int y=20;
    ptr=&y; //no this is not allowed now 
}


Constant pointer and data
int main()
{
    int x =10;
    const int const *ptr=&x; //constant integer and constant pointer
    ++x; //not allowed
    ++ *ptr; // not allowed
    int y =20;
     ptr =&y; // not allowed 
}

Constant Functions 

class Demo
{
    public:
        int x =10;
        int y =20;
        void Display() const  //declaration of constant function
        {
        x++; //not allowed
        cout<<x<<" "<<y<<<endl;
        }
};
int main()
{
    Demo d;
    d.Display(); // 10 20
}


Const parameters

void fun(const int &x,int &y) //constant parameter
{
    x++; //not allowed
    cout<<x<<" "<<y;
}
int main()
{
    int a=10,b=20;
    fun(a,b);

}
*/