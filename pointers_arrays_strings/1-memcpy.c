#include "main.h"
/**
 *_memcpy - copies n bytes from memory src to memory dest
 *@dest: where n bytes is copied to
 *@src: where n bytes are copied from
 *@n: number of bytes to be copied
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
