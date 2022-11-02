#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *@array: array of elements
 *@size: size of array
 *@action: pointer to function to be used
 *Return: Nothing, void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array == NULL)
		exit(0);
	if (action == NULL)
		exit(0);
	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
