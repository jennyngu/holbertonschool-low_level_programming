#include "main.h"
/**
 *_memset - fills first n bytes of memory pointed by s with constant byte
 *@s: pointer to memory area
 *@b: is the constant byte
 *@n: number of bytes to be filled
 *Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	/*iterate through while index is < than n bytes*/
	while (i < n)
	{
		/*replace element at each index with b*/
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
