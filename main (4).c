/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fact(int x); //fun declaration
int main()
{
    int n,r,ncr;
    scanf("%d%d",&n,&r);
    ncr=fact(n)/(fact(n-r)*fact(r));
    printf("%d",fact(ncr));
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    f=f*i;
    return f;
}
