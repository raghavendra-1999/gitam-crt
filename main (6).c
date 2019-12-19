/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  if(n%5==0 && n%11==0)
  printf("numbers are divisible by 5 and 11");
  else 
  printf("numbers are not divisible by 5 and 11");
}
