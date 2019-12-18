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
    if(ch>=65&&ch<=90)
    printf("it is capital alphabets");
    else if(ch>=97&&ch<=122)
    printf("it is lower case alphabets");
    else if(ch>=48&&ch<=57)
    printf("it is a digit");
    else
    printf("it is special alphabet");
    return 0;
}

