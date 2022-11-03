#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers -  prints numbers
 *@separator: string printed between numbers
 *@n: number of ints passed to func
 *Return: nothing, void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int next_num;
/*takes last parameter ie. n*/
	va_start(ap, n);

	if (separator == NULL)
		return;
	i = 0;
	next_num = va_arg(ap, int);
	while (i < n)
	{
		printf("%d", next_num);
		if (i <= n - 2)
			printf("%s", separator);
		next_num = va_arg(ap, int);
		i = i + 1;
	}
	va_end(ap);
	printf("\n");
}
