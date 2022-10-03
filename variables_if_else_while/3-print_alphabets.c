#include <stdio.h>
/**
*main - void says that there's no input arguments
*
*Return: will always return 0
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar (ch);
}
putchar('\n');
return (0);
}
