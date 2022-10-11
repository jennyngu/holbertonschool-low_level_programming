#include "main.h"
/**
 *puts2 - prints every second character, starting with the first char
 *
 *@str: *str is pointer argument, pointing to a string
 *
 *Return: nothing, void
 */

void puts2(char *str)
{
	int i;
	int length;

	length = 0;
        while (str[length] != '\0')
        {
		length++;
	}
	i = 0;
	while (i <= (length - 1))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
