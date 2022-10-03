#include <stdio.h>
/**
*main - prints single digit 0-9 using putchar
*
*Return: will always return 0
*/
int main(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
