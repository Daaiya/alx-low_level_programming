#include<stdio.h>
#include<stdlib.h>
/**
 * main - return alphabets boths lower and upper casses
 *
 * Return:Always o (Success)
 */
int main (void)
{
int ch = 'a';
int CH = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
