/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int
main ()
{
  char c[50], i;
  printf ("enter the name");
  gets (c);
for (i = 0; c[i] != '\0'; ++i);
printf ("length of the string %d",i);
return 0;
}

