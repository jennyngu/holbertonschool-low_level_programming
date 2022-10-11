#include "main.h"
#include <stdio.h>
/**
 *print_array - prints an array of integers
 *@a: is a pointer parameter, which happens to be an array
 *@n: is second parameter, the number of values inside the array
 *Return: nothing, void
 */

void print_array(int *a, int n)
{
	int i;

	/*cycle through the index of array starting from 0*/
	i = 0;
	/*as long as index is < the number of values in arr, keep iterating*/
	while (i < n)
	{
		/*print the value at this index of the pointer*/
		if (i == 0)
		{
			/*print first number without comma*/
			printf("%d", a[i]);
			i++;
		}
		else
		{	printf(", %d", a[i]);
			i++;
		}
	}
	printf("\n");
}
