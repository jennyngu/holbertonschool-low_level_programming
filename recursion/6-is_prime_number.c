#include "main.h"

/**
 *prime_number - recursively, return 1 for prime num, 0 if otherwise
 *@n: input target num
 *@i: starting num
 *Return: 1 for prime num, 1 otherwise
 */
int prime_number(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number(n, i + 1));
}

/**
 *is_prime_number - return 1 for prime num, 0 otherwise
 *@n: input num
 *Return: 1 for prime num, 1 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_number(n, 2));
}
