/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,a[10][10],i,j,fwds=0,revs=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[i]);
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    printf("%d",a[i]);
    }
    printf("\n");
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    if(i==j)
        {
            fwds+=a[i][j];
        }
        if(i+j==n-1)
        {
            revs+=a[i][j];
        }
    printf("%d",(fwds-revs));
    return 0;
}
}
}
