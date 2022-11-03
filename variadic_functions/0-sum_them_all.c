#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - sums all its given parameters
 *@n: parameter(s)
 *Return: the sum of all parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	va_start(ap, n);

	if (n == 0)
		return (0);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i = i + 1;
	}
	va_end(ap);
	return (sum);
}
