#include "main.h"
/**
 *_strlen - returns the length of a string
 *
 *@s: *s is a pointer that is a char type parameter
 *
 *Return: return 0 if successful
 */

int _strlen(char *s)
{
	int count;
	
	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
