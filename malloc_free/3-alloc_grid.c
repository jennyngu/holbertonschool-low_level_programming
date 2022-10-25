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
	int rows;
	int columns;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*mallocs values for start of each row*/
	array = malloc(sizeof(*array) * height);
	if (array == NULL)
		return (NULL);
	rows = 0;
	while (rows < height)
	{
		/*mallocs for each element inside array*/
		array[rows] = malloc(sizeof(*array[rows]) * width);
		if (array[rows] == NULL)
		{
			rows = 0;
			while (rows < height)
			{
				free(array[rows]);
				rows = rows + 1;
			}
			free(array);
			return (NULL);
		}
		columns = 0;
		while (columns < width)
		{
			array[rows][columns] = 0;
			columns = columns + 1;
		}
		rows = rows + 1;
	}
	return (array);
}
