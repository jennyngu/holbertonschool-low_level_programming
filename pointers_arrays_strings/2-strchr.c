#include "main.h"
#include <stddef.h>
/**
 *_strchr - finds specified character in a string
 *and returns the rest of the string following that charcter
 *@s: pointer to the string
 *@c: character that is to be found
 *Return: string if char is found, NULL if char not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		/*iterate through the value pointed to by s*/
		s = s + 1;
	}
	/*if c is the null char, return value pointed by s ie. null char*/
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
