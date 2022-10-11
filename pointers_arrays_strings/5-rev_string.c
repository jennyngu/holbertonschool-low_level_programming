#include "main.h"
/**
 *rev_string - reverses a string
 *
 *@str: *str is the pointer argument that points to a string
 *
 *Return: nothing because void
 */

void rev_string(char *str)
{
	int i;
	int length;
	int StrMidPoint;
	char tempStrHolder;

	length = 0;
        while (str[length] != '\0')
        {
                length++;
	}
	StrMidPoint = length / 2;
	i = 0;
	while (i < StrMidPoint)
	{
		tempStrHolder = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tempStrHolder;
		i++;
	}
}
