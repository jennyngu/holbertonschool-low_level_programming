#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - finds first occurance  character in a string
 *and returns the rest of the string following that charcter
 *@s: pointer to string containing any accept char
 *@accept: characters accepted by s
 *Return: string if char is found, NULL if char not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
			/*value pointed to by s + value at index i ie. l*/
				return (s + i);
			}
			/*iterate till end of accept, adding i of s each time*/
			j = j + 1;
		}
		i = i + 1;
	}
	return (NULL);
}
