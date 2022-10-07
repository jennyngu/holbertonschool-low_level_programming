#include "main.h"

void print_char (char c, int timesToPrint)
{
	if (timesToPrint < 0)
	{
		for (_putchar(c);
		timesToPrint++;
		_putchar('\n');
	}
	return;
}

/**
 *
 *top of tree downwards -- int size - 1 (gives number of spaces for that line)
 *
 */

void print_triangle(int size)
{
	int rows;
	int numOfHashes;

	rows = 0;
	numOfHashes = 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (rows < size)
	{
		print_char(' ', size - 1);
		print_char('#', numOfHashes);
		rows = rows + 1;
		numOfHashes = numOfHashes + 1;
	}
}
