/*
int main()
{
    ifstream infile;
    //or 
    infile.open("My.txt"); //ios::in for reading  //ios::out for writing but ifstream is for reading only
    if(!infile) or if(!infile.is_open())
    {
        cout<<"File cannot be openned"<<endl;
    }
    string str;
    int x;
    infile>>str; //infile extract in  str
    infile>>x; //infile extract in x
    cout<<str<<" "<<x;
    if(infile.eof()) //eof is end of file
    {
        cout<<"end of file reached";
    }
    infile.close();
}
My.txt has just "Hello" and 25 written in it
*/