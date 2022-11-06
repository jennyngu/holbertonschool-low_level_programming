#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_char - prints a char
 *@type: arg type
 */
void print_char(va_list type)
{
	printf("%c", va_arg(type, int));
}

/**
 *print_int - prints an int
 *@type: arg type
 */
void print_int(va_list type)
{
	printf("%d", va_arg(type, int));
}

/**
 *print_float - prints a float
 *@type: arg type
 */
void print_float(va_list type)
{
	printf("%f", va_arg(type, double));
}

/**
 *print_string - prints a string
 *@type: arg type
 */
void print_string(va_list type)
{
	char *string;

	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", va_arg(type, char *));
}

/**
 *print_all - prints all types
 *@format: list of types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	va_start(ap, format);

	printf("\n");
	va_end(ap);
}
