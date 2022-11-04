#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - prints a string
 *@separator: string printed between strings
 *@n: number of strings passed to func
 *Return: Nothing, void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *next_string;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		next_string = va_arg(ap, char*);
		if (next_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", next_string);
		}
		i = i + 1;
	}
	va_end(ap);
	printf("\n");
}
