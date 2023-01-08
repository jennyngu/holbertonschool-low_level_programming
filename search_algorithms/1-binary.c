#include "search_algos.h"

/**
 *binary_search - searches for target element within a sorted array
 *@array: pointer to first element of array
 *@size: size of array
 *@value: value to search for
 *Return: index where value is found or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t middle, start, end;

	if (array == NULL)
	{
		return (-1);
	}
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		middle = start;
		while (middle < end)
		{
			printf("%d, ", array[middle]);
			middle = middle + 1;
		}
		printf("%d\n", array[middle]);
		middle = start + (end - start) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		if (array[middle] > value)
		{
			end = middle - 1;
		}
		else
		{
			start = middle + 1;
		}
	}
	return (-1);
}
