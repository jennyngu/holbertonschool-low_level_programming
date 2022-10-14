#include "main.h"
#include <stddef.h>
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
	while (haystack[i] != '\0')
	{
		if (needle[i] == haystack[i])
		{
			return (needle);
		}
		i = i + 1;
	}
	return (NULL);
}
