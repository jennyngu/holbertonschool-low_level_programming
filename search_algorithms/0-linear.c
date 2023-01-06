#include "search_algos.h"
/**
 *linear_search - searches through an array linearly
 *@array: pointer to first element of array to search in
 *@size: number of elements in the array
 *@value: value to search for
 *Return: index where value is found or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
