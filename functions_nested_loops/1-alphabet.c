#include "main.h"
/**
 *main - prints the alphabet
 *
 *Return: will return 0 if successful
 */

void	print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
	return (0);
}
