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
	int halfString;
	int length;

	length = _strlen(str);
	halfString = 0;
	while (halfString < length)
	{
		if (halfString > (length - 1) / 2)
		{
			_putchar(str[halfString]);
		}
		halfString++;
	}
	_putchar('\n');
}
