 /*
 try
 {
     --- int 
     ---- float 
     --- unknown datatype
 }
 catch(int e)
 {
     ---
     ---
 }
 catch(float f)
 {
     --
     --
 }
 catch(...) //this catch block is called as catch All and these three dots are elipse snd it id used for all type of datatypes, we can say if we dont know the data type we use it
 {          //writing multiple catch block is better as that will give clear msg to user about what is wrong and this catch all block will give same msg to every type of error
     --     //we should keep it as last block as it will be executed first if it is kept before and catch blocks after this will be useless
     --
 }



 try //we can use nested try catch too
 {
     try
     {

     }
     catch()
     {

     }
    
 }
 catch()
 {

 }





 class MyException1
 {

 };
class MyException2:public MyException1
{

};

try
{
    --
    ---
}
catch(MyException2 e)  //child class is written first then the parent class is written
{

}
catch(MyException1 e)
{

}

 */