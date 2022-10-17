#include "main.h"
/**
 *factorial - returns the factorial or a given number
 *@n: factorial of this number to be found
 *Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
