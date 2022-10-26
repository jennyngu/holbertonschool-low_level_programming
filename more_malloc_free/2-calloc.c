#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_memset - fills first n bytes of memory pointed by s with constant byte
 *@s: pointer to memory area
 *@b: is the constant byte
 *@n: number of bytes to be filled
 *Return: pointer to the memory area
 */

unsigned *_memset(unsigned *s, unsigned int b, unsigned int n)
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

/**
 *_calloc - allocates memory for an array using malloc
 *@nmemb: number of elements to be allocated in the array
 *@size: size of elements
 *Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/*malloc size of unsigned ints * how many nmemb (elements) provided*/
	pointer = malloc(sizeof(pointer) * nmemb);
	if (pointer == NULL)
		return (NULL);
	if (nmemb > 0)
	{
		/*use memset to set memory to 0*/
		_memset(pointer, 0, sizeof(nmemb));
	}
	i = 0;
	/*iterate till max num of elements reached*/
	/*stop finding addresses when i reaches \0 of strings*/
	while (i <= nmemb && i != '\0')
	{
		pointer[i] = size;
		i = i + 1;
	}
	return (pointer);
}
