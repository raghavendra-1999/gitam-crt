/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int r,c,a[10][10],b[10][10],i,j;
    printf("enter the no of rows");
    scanf("%d",&r);
    printf("enter the no of columns");
    scanf("%d",&c);
    printf("enter the 1st matrix");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    scanf("%d",&a[i][j]);
    }
    
    printf("enter the 2nd matrix");
    for(i=0;i<r;++i)
    for(j=0;j<c;j++)
    {
    scanf("%d",&b[i][j]);
    }
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
    printf(" %d",a[i][j]*b[i][j]);
    printf("\n");
    }
    }
    return 0;
    
    }

