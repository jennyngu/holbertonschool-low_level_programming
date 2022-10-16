#include "main.h"
#include <stddef.h>
/**
 *_strspn - finds length of a prefix substring
 *@s: pointer to a string
 *@accept: pointer to a string
 *accept: pointer to a string that contains chars that need to be found in s
 *Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length;
	unsigned int subLength;

	length = 0;
	subLength = 0;
	i = 0;
	/*return 0 if either strings are empty*/
	if ((s == NULL) || (accept == NULL))
	{
		return (length);
	}
	/*iterate till reach null char*/
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				/*increase length if i == j*/
				length = length + 1;
			}
	/*add 1 to j counter to check if s[i] also matches next accept char*/
			j = j + 1;
		}
		if (subLength < length)
		{
			subLength = length;
		}
		else
		{
			break;
		}
		s = s + 1;
	}
	return (subLength);
}
