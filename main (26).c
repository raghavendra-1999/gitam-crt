/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 long long int n,r,sum=0;
 printf("enter the numbers");
 scanf("%lld",&n);
 a:
 while(n!=0)
{
    r=n%10;
    sum=sum+r;
    n=n/10;
}
if(sum>9)
{
    n=sum;
    sum=0;
    goto a;
}
printf("%lld",sum);
    return 0;
}

