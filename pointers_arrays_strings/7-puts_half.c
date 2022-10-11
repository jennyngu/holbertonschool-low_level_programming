#include "main.h"
/**
 *puts_half - prints half a string
 *@str: *str is the pointer parameter
 *Return: nothing because void
 */

void puts_half(char *str)
{
	int wholeString;
	int halfString;
	int oddString;

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
