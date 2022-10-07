#include "main.h"
/**
 *print_triangle - prints spaces and hashes to create a triangle
 *
 *@size: the size of the triangle
 *
 *Return: nothing (void)
 */

void print_triangle(int size)
{
	int rows;
	int columns;

	columns = 1;
	while (columns <= size && size > 0)
	{
		rows = 0;
		while (rows < size - columns)
		{
			_putchar(' ');
			rows++;
		}
		rows = 0;
			while (rows < columns)
		{
			_putchar('#');
			rows++;
		}
		_putchar('\n');
		columns++;
	}
	if (columns == 1)
	{
		_putchar('\n');
	}
}
