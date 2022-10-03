#include <stdio.h>
/**
*main - printing single digits as a list
*
*Return: will always return 0
*/
int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i < '9')
{
putchar(", ");
}
else
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
