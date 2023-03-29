/* Number Systems
binary = 0,1
octal = 0 1 2 3  4  5 6  7 
decimal = 0 1 2 3 4 5 6 7 8 9 
hexadecimal = 0 1 2 3 4 5 6 7 8 9 A B C D E F

Table to remember -
decimal  binary  octal   hexadecimal 
0        0        0         0 
1        1        1         1
2        10       2         2
3        11       3         3
4        100      4         4
5        101      5         5
6        110      6         6
7        111      7         7
8        1000     10        8
9        1001     11        9
10       1010     12        A
11       1011     13        B
12       1100     14        C
13       1101     15        D
14       1110     16        E
15       1111     17        F
16       10000    20        10

Decimal to binary conversion-
example-
25base 10 means decimal to binary conversion 
25/2 = 12 and remainder 1
12/2 = 6 and remainder 0
6/2 = 3 and remainder 0
3/2 = 1 and remainder 1 
1/2 = 0 and remainder 1
read remainder from downward to upward, this will give you the binary number 
hence 11001 is binary number of 25 base 10 

Now binary to decimal for this same 
1      1      0       0      1         
2^4    2^3    2^2     2^1    2^0

now mulitplying correspondingly 
1*2^4 + 1*2^3 + 0*2^2 + 0*2^1 + 1*2^0
= 1*16 + 1*8 + 0*4 + 0*2 + 1*1
= 16 + 8 + 0 + 0 + 1
= 25
*/