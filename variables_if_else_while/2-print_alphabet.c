#include <stdio.h>
/**
*main - void says that there's no input arguments
*
*Return: will always return 0
*/
int main(void)
{
char start = 'a';
char end = 'z';
char ch = start;
while (ch != end)
{
putchar(ch);
ch++;
}
return (0);
}
