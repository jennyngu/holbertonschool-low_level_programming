#include "main.h"
/**
 *string_toupper - converts lowercase letters to uppercase
 *@ptr: pointer arg, points to string
 *Return: the converted string
 */

char *string_toupper(char *ptr)
{
	while (*ptr != '\0')
	{
		if (*ptr > 'a' && *ptr < 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (ptr);
}
