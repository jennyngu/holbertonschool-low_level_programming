#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees a 2D grid previously created by alloc_grid func
 *@grid: pointer to 2D grid created
 *@height: height ie. rows that will be freed
 *Return: nothing, void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}
