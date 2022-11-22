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

	found_bit = (n >> index) & 1;
	return (found_bit);
}
