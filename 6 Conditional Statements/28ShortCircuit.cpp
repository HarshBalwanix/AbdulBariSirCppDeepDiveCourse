/*
if(a>b && a>c)
   F       X        //Since 1st condition is false so compiler will not check for second one as first condition is already false and output will be false regardless of second input be true or false this is known as short circuit
                    //This is because as we know for && operator both the condition should be true for output as true
if(a>b || a>c)
    T      X        //Since 1st condition is true so compiler will not check for second one as first condition is already true this is known as short circuit
                    //This is because as we know for || operator both the condition should be true for output as true


For Example
   int a=5,b=7,i=5;
   if(a>b && ++i<b)
   cout<<i;
   here a<b so compiler will not check for ++i<b 
   therefore 
   output will be 5

    int a=15,b=7,i=5;
   if(a>b && ++i<b)
   cout<<i;
   here a>b so compiler will  check for ++i<b 
   therefore 
   output will be 6

   So the conclusion is never use increment/decrement operator in conditional statements
*/