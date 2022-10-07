#include "main.h"
/**
 *print_line - prints an _ character followed by a new line
 *
 *Return: returns the _ characters
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l = l + 1)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
