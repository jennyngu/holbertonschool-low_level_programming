#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet 10 times
*
*Return: will return 0 if successful
*/
void    print_alphabet_x10(void)
{
	int i, p;

	p = 0;
	while (p <= 9)
	{
		i = 'a';
		while (i <= 'z')
		{
		_putchar(i);
		i++;
		}
	_putchar('\n');
	p++;
	}
}
