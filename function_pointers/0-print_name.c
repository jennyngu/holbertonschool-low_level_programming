#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - prints a name using function pointers
 *@name: name to be printed
 *@f: pointer to the name
 *Return: Nothing, void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
