#include "main.h"

/**
 *_strlen - returns the length of a string
 *
 *@s: *s is a pointer that is a char type parameter
 *
 *Return: return 0 if successful
 */

int _strlen(const char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 *binary_to_uint - converts binary to unsigned int
 *@b: pointer to string of 0 and 1 chars
 *Return: converted num or
 *0 if there's one or more chars in b that aren't 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int str_len;
	unsigned int deci_num;
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}
	str_len = _strlen(b) - 1;
	deci_num = 0;
	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);
		}
		if (b[i] == '1')
		{                 /*b[i] - 48*/
			deci_num = deci_num + 1 * (1 << str_len);
		}
		str_len = str_len - 1;
		i = i + 1;
	}
	return (deci_num);
}
