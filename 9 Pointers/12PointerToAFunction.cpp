/*
pointer to a function
void display()
{
    cout<<"hello";
    
}
int main()
{
    void(*fp)();//declaration of a pointer
    fp=display; //initialisation of  function
    (*fp)(;) // call
}


int max(int x, int y)
{
    return x>y? x:y; 
}

int min(int x,int y)
{
    return  x<y? x:y;
}

int main()
{
    int(*fp)(int ,int );
    fp=max;
    (*fp)(10,5); // max function is called
    fp=min;
    (*fp)(10,5); // min function is called
}

*/