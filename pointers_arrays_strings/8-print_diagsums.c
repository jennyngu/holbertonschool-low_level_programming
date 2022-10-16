#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the diagonal lines of an array
 *@a: pointer to array
 *@size: size of the array
 *Return: nothing, void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sumLeftRight;
	int sumRightLeft;

	i = 0;
	j = 0;
	sumLeftRight = 0;
	sumRightLeft = 0;
	while (i <= (size * size))
	{
		sumLeftRight = sumLeftRight + a[i];
		/*after 1st loop,[i] = 4th index, then [i] = 8th index etc*/
		i = i + size + 1;
	}
	/*-1 to move backwards along row*/
	j = size - 1;
	while (j < (size * size - 1))
	{
		sumRightLeft = sumRightLeft + a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", sumLeftRight, sumRightLeft);
}
