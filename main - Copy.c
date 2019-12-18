/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a=10,b=5,c;
   c=a>b;
   printf(" a is greater than b\n",c);
    c=a<b;
     printf("a is less than b\n",c);
    c=a=b;
     printf(" a is equal to b\n",c);
    c=a>=b;
     printf(" a is greater than or equal to b\n",c);
    c=a<=b;
     printf(" a is less than or equal to b\n",c);
  return 0;
}

