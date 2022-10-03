#include <stdio.h>
/**
*main - print all numbers of base 16 in lowercase
*
*Return: will always return 0
*/
int main(void)
{
int i;
int j;
for (i = 0; i < 9; i++)
{
if (i == 9)
{
putchar (i);
}
for (j = 'a'; j <= 'f'; j++)
{
if (j == 'f')
{
putchar ('j');
}
}
}
putchar('\n');
return (0);
}
