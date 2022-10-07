#include "main.h"
/**
 *print_square - prints a diagonal line
 *
 *@n: number of # to be printed
 *
 *Return: returns nothing (void)
 */

void print_square(int n)
{
	int r;
	int c;

	c = 0;
	while (c < n && n > 0)
	{
		r = 0;
		while (r < n)
		{
			_putchar('#');
			r++;
		}
		_putchar('\n');
		c++;
	}
	if (c == 0)
	{
		_putchar('\n');
	}
}
