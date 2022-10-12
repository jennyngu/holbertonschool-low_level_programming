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
 *_strncpy - copies a string
 *@dest: pointer arg
 *@src: pointer arg containing string that gets copied
 *@n: max number of bytes of src to be copied
 *Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	/*iterate through src as long as it hasn't reached null and < n*/
	while (src[i] != '\0' && i < n)
	{
		/*copy src into dest*/
		dest[i] = src[i];
		i++;
	}
	/*if max byte not reached, keep going then add null char at end*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
