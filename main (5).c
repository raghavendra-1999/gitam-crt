/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int large(int x);
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",large(n));
    return 0;
}
int large(int x)
{
    int r,max=0;
    while(x!=0)
    {
        r=x%10;
        if(r>max)
        max=r;
        x=x/10;
    }
    return max;
}
