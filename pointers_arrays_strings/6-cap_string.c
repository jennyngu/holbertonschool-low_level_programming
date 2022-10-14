#include "main.h"
/**
 *cap_string - capitalises all words of a string
 *@ptr: pointer to the string
 *Return: capitalised words of given string
 */

char *cap_string(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i])
	{
		while (!(ptr[i] >= 'a' && ptr[i] <= 'z'))
		{
			i = i + 1;
		}
		if (ptr[i - 1] == ' ' ||
		    ptr[i - 1] == '\t' ||
		    ptr[i - 1] == '\n' ||
		    ptr[i - 1] == ',' ||
		    ptr[i - 1] == ';' ||
		    ptr[i - 1] == '.' ||
		    ptr[i - 1] == '!' ||
		    ptr[i - 1] == '?' ||
		    ptr[i - 1] == '"' ||
		    ptr[i - 1] == '(' ||
		    ptr[i - 1] == ')' ||
		    ptr[i - 1] == '{' ||
		    ptr[i - 1] == '}' ||
		    i == 0)
		{
			ptr[i] = ptr[i] - 32;
		}
		i++;
	}
	return (ptr);
}
