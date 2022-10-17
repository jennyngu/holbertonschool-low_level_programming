#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse order
 *@s: pointer to string that will be reversed
 *Return: nothing, void
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return;
	}
	/*create stack of func calls till '\0'*/
	_print_rev_recursion(s + 1);
	/*unrolling; prints s staring from highest index b/c of recursive + 1*/
	_putchar(s[i]);
}
