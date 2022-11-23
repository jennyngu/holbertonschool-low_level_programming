#include "main.h"

/**
 *set_bit - sets value of a bit to 1 at given index
 *@n: pointer to number
 *@index: index where value should be set to 1
 *Return: 1 if successful, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int change_bit = 1;

	if (index > 32)
	{
		return (-1);
	}
	*n ^= (-change_bit ^ *n) & (1ul << index);
	return (change_bit);
}
