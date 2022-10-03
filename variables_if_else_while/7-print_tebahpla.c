#include <stdio.h>
/**
*main - printing the lowercase alphabet in reverse
*
*Return: will always return 0
*/
int main(void)
{
int ch;
for (ch = 'z'; ch <= 'a'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
