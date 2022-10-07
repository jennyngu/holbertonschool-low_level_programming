#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints numbers from 0 to 98 with commas and space
 *
 *Return: returns 0 if successful
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}
	printf("98\n");
}
