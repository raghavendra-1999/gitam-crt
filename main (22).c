/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int a[100],n,i,j,temp,min;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    min=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min])
        min=j;
    }
        temp=a[i];
        a[i]=a[min];
        a[i+1]=temp;
}  
for(i=0;i<n;i++)
 printf("%d ",a[i]);

return 0;
}

