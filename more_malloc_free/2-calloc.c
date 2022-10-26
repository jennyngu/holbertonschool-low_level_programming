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
	/*malloc total size of array*/
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	i = 0;
	/*sets memory of each address to 0*/
	while (i < (nmemb * size))
	{
		pointer[i] = 0;
		i = i + 1;
	}
	return (pointer);
}
