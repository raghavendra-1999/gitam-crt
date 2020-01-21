/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void add();
int main()
{
   add();
return 0;
}
void add()
{
    int a,b,c;
    printf("enter the 2 nos");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}

