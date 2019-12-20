/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int year;
   printf("enter the year");
   scanf("%d",&year);
   if(year%4==0 && year%100!=0 || year%400==0)
    printf("it is a leap year %d",year);
   else
   printf("it is not a leap year %d");
    return 0;
}


