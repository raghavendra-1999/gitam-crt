/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int add();
int main()
{
int c;
 c=add();
 printf("%d",c);
return 0;
}
int add()
{
    int a,b,c;
    printf("enter the 2 nos");
    scanf("%d%d",&a,&b);
    return (a+b);
}

