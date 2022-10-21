#include "main.h"
/**
 *sqrt_rec - returns natural square root of a number
 *@starting_num: num start counting from till and if n is reached
 *@n: input num, num to be reached
 *Return: starting num if have sqrt, -1 if not
 */
int sqrt_rec(int starting_num, int n)
{
	if (starting_num * starting_num == n)
	{
		return (starting_num);
	}
	if (starting_num * starting_num > n)
	{
		return (-1);
	}
	return (sqrt_rec(starting_num + 1, n));
}

/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: int parameter to find the square root of
 *Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (sqrt_rec(1, n));
}
