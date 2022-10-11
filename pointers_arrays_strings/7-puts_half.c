#include "main.h"
/**
 *puts_half - prints half a string
 *@str: *str is the pointer parameter
 *Return: nothing because void
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
void puts_half(char *str)
{
	int wholeString;
	int halfString;
       	int length;
	int odd;

	length = _strlen(str);
	odd = (length - 1) / 2;
	if (length % 2 == 0)
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
		else
		{
			while (str[odd])
			{
				_putchar(str[odd]);
				odd++;
			}
		}
	_putchar('\n');
}
