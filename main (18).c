/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
typedef struct
{
    char name[100];
    int id;
    float sal;
}emp;
int main()
{
    emp e;
    strcpy(e.name,"ram");
    e.id=1947;
    e.sal=10000;
    printf("\n emp details are \n");
    printf("\n name is %s",e.name);
    printf("\n id %d",e.id);
    printf("\n salary ",e.sal);
    return 0;
}
