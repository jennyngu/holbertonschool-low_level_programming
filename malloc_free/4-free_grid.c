#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees a 2D grid previously created by alloc_grid func
 *@grid: pointer to 2D grid created
 *@height: height of grid
 *Return: nothing, void
 */

void free_grid(int **grid, int height)
{
	grid = malloc(sizeof(*grid) * height);
	free(grid);
}
