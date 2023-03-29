/*
static variables are just like global variables but there accessiblity is limited to the particular function or they are not created every time 
void fun()
{
    static int v=0; //v is increased and saved just like first it will give output as 1 then 2 then 3
    int a=5;
    v++;   //here it will increase value of v by 1
    cout<<a<<" "<<v;
}
main()
{
fun(); // output 5 1
fun(); // output 5 2
fun(); // output 5 3
}
*/