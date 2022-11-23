#include "main.h"

/**
 *clear_bit - sets value of a bit to 0 at a given index
 *@n: pointer to number
 *@index: index where value should be set to 0
 *Return: 1 if successful, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	*n &= ~(1ul << index);
	return (1);
}
