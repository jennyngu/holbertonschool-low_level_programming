#include "main.h"
/**
 *print_numbers - prints numbers from 0-9
 *
 *Return: returns nothing because void
 */

void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
