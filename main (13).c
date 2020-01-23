/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void printleader(int arr[],int n)
{
    int max=arr[n-1],i;
    printf("%d",max);
    for(i=n-1;i>=0;i++)
    {
        if(max<arr[i])
        {
            printf("%d",arr[i]);
            max=arr[i];
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printleader(a,n);
    return 0;
}
    
