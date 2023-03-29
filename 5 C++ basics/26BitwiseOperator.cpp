/*
Bitwise Operators
& and
| or
^ xor
~ not
<<
>>
these operations are performed on the bits of the data and not on whole data and they are just like or
example 
int x =11, y = 7,z;
11 in binary form is 00001011
7  in binary form is 00000111
z= x & y; //&
  00001011
  &
  00000111 will give
  00000011 and 11 is in binary form 
  11 in decimal form is 3 
  hence z will give 3 as output
  now lets 
  z = x | y; //or
  00001011
  |
  00000111 will give
  00001111 and 1111 is in binary form
  1111 in decimal form will be 15
  hence z will be 15 
 z = x ^ y; //xor
  00001011
  ^
  00000111 will give
  00001100 and 1100 is in binary form
  1100 in decimal form will be 12
  Two's complement is a mathematical operation on binary numbers, and is an example of a radix complement. It is used in computing as a method of signed number representation. When the Most Significant Bit is a one, the number is signed as negative.
  To get 2's complement of binary number is 1's complement of given number plus 1 to the least significant bit (LSB). For example 2's complement of binary number 10010 is (01101) + 1 = 01110.
  
  char x=5,y;
  x in binary form is 00000101
  y = ~x;
  y in binary form will be 11111010 // since it starts with 1 it means the number is negative
  negative numbers in c++ are represented in 2s compliment form 
  first convert the number in 2s compliment form 
  1 should be replaced with 0 and 0 with 1
  11111010 will be 00000101
  to convert it into decimal form 
  00000101
  +
  00000001
  00000110  this is in binary form 
  its decimal form is 6
  hence the negation of 5 is -6 
  
  these are used in electronics or hardware based

  x = 00000101
  y = x<<1
  y=000001010 it is in binary form and in decimal form it is 10
  this implies 5*2 is the operation here
  this further implies if 
  x <<i;
  x*pow(2,i)
 similarly 
 x>>i 
 x/(pow(2,i))

*/    