#include "main.h"

/**
 *get_bit - gets value of a bit at given index
 *@n: integer argument
 *@index: index to get bit of n integer
 *Return:  value of the bit at index index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int found_bit;

	if (index > 64)
	{
		return (-1);
	}
	found_bit = (n >> index) & 1;
	return (found_bit);
}

/**
 *flip_bits - flips a bit, changing the number to another
 *@n: number to be flipped
 *@m: target number after flip
 *Return: flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;
	unsigned int i;

	num = 0;
	i = 0;
	while (i < 64)
	{
		if (get_bit(n, i) != get_bit(m, i))
		{
			num = num + 1;
		}
		i = i + 1;
	}
	return (num);
}
