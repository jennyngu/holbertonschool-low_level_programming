#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *int_index - searches for an integer
 *@array: array to search through
 *@size: number of elements in the array
 *@cmp: pointer to function used to compare values
 *Return: index of first element where cmp does not return 0
 * -1 for no element match or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int return_cmp;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		(return_cmp = cmp(array[i]));
		if (return_cmp != 0)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
