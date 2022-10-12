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
	while (ptr[i] != '\0')
	{
		if (ptr[i] == 0)
		{
			if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				ptr[i] = ptr[i] - 32;
			}
		}
		else if (ptr[i] == ' ' || ptr[i] == 9 || ptr[i] == '\n')
		{
			i++;
			if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				ptr[i] = ptr[i] - 32;
			}
		}
		else if (ptr[i] == ',' || ptr[i] == ';' || ptr[i] == '.')
		{
			i++;
			if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				ptr[i] = ptr[i] - 32;
			}
		}
		else if (ptr[i] == '!' || ptr[i] == '?' || ptr[i] == '"')
		{
			i++;
			if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				ptr[i] = ptr[i] - 32;
			}
		}
		else if (ptr[i] == '(' || ptr[i] == ')')
		{
			i++;
			if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				ptr[i] = ptr[i] - 32;
			}
		}
		else if (ptr[i] == '{' || ptr[i] == '}')
		{
			i++;
			if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				ptr[i] = ptr[i] - 32;
			}
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
