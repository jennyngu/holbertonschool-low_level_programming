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
 *_strncat - concats two strings. Uses at most n bytes from src string
 *@dest: pointer arg, holds first string
 *@src: pointer arg, holds second string, gets appended onto dest
 *@n: number of bytes from src that can be appended to dest
 *Return: pointer to resulting string in dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destLength;

	destLength = _strlen(dest);
	i = 0;
	/*strncat overwrites null char of dest. src i cant equal null char*/
	/*stop when n bytes is reached*/
	while (src[i] != '\0' && i < n)
	{
		/*append src to dest*/
		/*increase destLength by i to account for len increase of dest*/
		dest[destLength + i] = src[i];
		i++;
	}
	return (dest);
}
