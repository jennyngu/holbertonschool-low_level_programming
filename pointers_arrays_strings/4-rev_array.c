#include "main.h"
/**
 *reverse_array - reverses an array of integers
 *@a: pointer to array of integers
 *@n: number of elements in the array
 *Return: nothing, void
 */

void reverse_array(int *a, int n)
{
	int i;
	int valueHolder;

	i = 0;
	/*index is at < half  number of elements (halfway point)*/
	while (i < n / 2)
	{
		/**
		 *\*(a+1) means to get the address of the first element + 1
		 *ie. now is the address of second element
		 */
		valueHolder = *(a + i);
		/**
		 *give address of the 2nd element whatevers in last i of array
		 *a(ie. str) + n(ie. length) - 1 points to end of array,
		 *-i decreases the end by 1 for next swap
		 */
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = valueHolder;
		i++;
	}
}
