#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
