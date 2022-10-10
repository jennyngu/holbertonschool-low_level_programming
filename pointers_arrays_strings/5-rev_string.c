#include "main.h"
#include <string.h>
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

	length = strlen(str);
	StrMidPoint = length / 2;
	for (i = 0; i < StrMidPoint; i++)
	{
		tempStrHolder = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tempStrHolder;
	}
}
