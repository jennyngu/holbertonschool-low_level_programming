#include "main.h"
/**
 *puts_half - prints half a string
 *
 *Return: nothing because void
 */

void puts_half(char *str)
{
	int wholeString;
	int halfString;

	wholeString = 0;
	while (str[wholeString])
	{
		wholeString++;
	}
	halfString = wholeString / 2;
	while (str[halfString])
	{
		_putchar(str[halfString]);
		halfString++;
	}
	_putchar('\n');
}
