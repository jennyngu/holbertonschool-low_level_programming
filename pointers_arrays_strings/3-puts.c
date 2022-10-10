#include "main.h"
/**
 *_puts - prints a string
 *
 *@str: *str is a pointer that is a char type parameter
 *
 *Return: return nothing because void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
        _putchar('\n');
}
