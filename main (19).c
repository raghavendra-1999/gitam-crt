/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int a[100],n,i,j,temp;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
    for(j=0;j<n-i;j++)
    {
        if(a[j]>a[j+1])
        {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
    }
}for(j=0;j<n;j++)
 printf("%d ",a[j]);

return 0;
}

