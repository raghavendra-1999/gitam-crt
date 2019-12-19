/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 1:'sunday';
    case 2:'monday';
    case 3:'wednesday';
    case 4:'thursday';
    case 5:'friday';
    case 6:'saturday';
    printf("it is a week day");
    break;
    default:
    printf("it is a not week day");
    printf("\n");
    break;
    return 0;
}
}
