#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 *
 *@n: is the number diagonals to be printed
 *
 *Return: returns nothing (void)
 */

void print_diagonal(int n)
{
	int r;
	int c;

	c = 0;
	while (c < n && n > 0)
	{
		r = 0;
		while (r < c)
		{
			_putchar(' ');
			r++;
		}
		_putchar('\\');
		c++;
		_putchar('\n');
	}
	if (c == 0)
	{
		_putchar('\n');
	}
}
