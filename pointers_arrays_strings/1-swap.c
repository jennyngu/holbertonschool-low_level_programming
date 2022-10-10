#include "main.h"
/**
 *swap_int - swaps the integers given within the given arguments
 *
 *@a: *a is a pointer argument
 *@b: *b is a pointer argument
 *
 *Return: nothing because void
 */

void swap_int(int *a, int *b)
{
	int valueHolder;

	valueHolder = *a;
	*a = *b;
	*b = valueHolder;
}
