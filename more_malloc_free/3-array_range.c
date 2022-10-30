#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: min value array should be created from
 *@max: max value of array
 *Return: pointer to created array, NULL if fail
 */

int *array_range(int min, int max)
{
	int i;
	int *pointer;
	int range;

	if (min > max)
		return (NULL);
	/*find range including null byte*/
	range = max - min + 1;
	pointer = malloc(sizeof(*pointer) * range);
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		pointer[i] = min;
		min = min + 1;
		i = i + i;
	}
	return (pointer);
}
