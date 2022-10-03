#include <stdio.h>
/**
*main - print out the letters of the alphabet excluding e and q
*
*Return: will always return 0
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
