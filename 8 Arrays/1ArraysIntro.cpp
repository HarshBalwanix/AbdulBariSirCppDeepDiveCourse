/*
Arrays
Scalor x=5

vector
A =(5,8,3,9,7,4,8,6,3,2)
    0 1 2 3 4 5 6 7 8 9

int A[10]   read as int A of size 10
it will allocate memory for 10 variables with name of single variable
starts from 0 to 9
how to store now?
A[10]={5,8,3,9,7,4,8,6,3,2}
how to call
cout<<A[3] 9
cout<<A[8] 3
cout<<A; it will not print whole array

int main()
{
    int A[5]={2,4,6,8,10};
    //to print all these elements
    for(int i=0;i<=4;i++)
    {
        cout<<A[i]<<endl;
    }
}
How to declare and initialise an array of different datatype
int A[5]={2,4,6,8,10};
float B[5]={1.1,2,3.4,5.2,4}
char C[5]={'a','b','c','d','e'}

int A[]={2,4,56} // can do like this too
int A[5]={2,4} //it will store all other values with 0

*/