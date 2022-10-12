#include "main.h"
/**
 *_strlen - counts number of characters in a string ie. length
 *@s: pointer parameter, string
 *Return: return length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 *puts_half - prints half a string
 *@str: *str is the pointer parameter
 *Return: nothing because void
 */

void puts_half(char *str)
{
	int wholeString;
	int halfString;
	int length;
	int odd;

	length = _strlen(str);
	if (length % 2 == 1)
	{
		odd = (length - 1) / 2;
		while (str[odd])
		{
			_putchar(str[odd]);
			odd++;
		}
	}
	else
	{
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
	}
	_putchar('\n');
}
