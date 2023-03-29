/*
All about throw
class MyException:public exception //built in class for exception and it is not compulsory to inherit we can use over own class
{
    public:
        char *what()
        {
            return "Myexception";
        }
};
int division(int x,int y) throw(int) // your choice to write it or not but if throw() is written, it means function doesnt throw anything
{
    if(y==0)
    throw "anything"; // can throw anything even we can throw a class too
}
*/