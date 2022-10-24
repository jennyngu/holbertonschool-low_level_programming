#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns pointer to a 2D array of ints
 *@width: size of width of array
 *@height: size of height of array
 *Return: an array of rows, or NULL if height or width is 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int *values_in_array;
	int **array_of_rows;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*mallocs full size of array*/
	values_in_array = malloc(sizeof(*values_in_array) * height * width);
	/*mallocs values for each start of rows*/
	array_of_rows = malloc(sizeof(*array_of_rows) * height);
	if (values_in_array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		/*gives address of the start of each row*/
		array_of_rows[i] = values_in_array + i * width;
		i = i + 1;
	}
	return (array_of_rows);
}
