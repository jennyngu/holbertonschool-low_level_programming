#include "main.h"
#include <stddef.h>

/**
 *needle_location_in_haystack - finds char or string within another string
 *@haystack: pointer to a string that may or may not contain needle string
 *@needle: pointer to a string that needs to be found
 *Return: 1 is needle is in haystack, 0 if not
 */

int needle_location_in_haystack(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] == needle[i] && needle[i] != '\0')
	{
		i = i + 1;
	}
	if (needle[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 *_strstr - searches through haystack to find needle & return string of needle
 *@haystack: pointer to string
 *@needle: pointer to string that is to be found in haystack
 *Return: needle if found in haystack or NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	while (haystack[i] != '\0')
	{
		if (needle_location_in_haystack(&haystack[i], needle) == 1)
		{
			return (&haystack[i]);
		}
		i = i + 1;
	}
	return (NULL);
}
