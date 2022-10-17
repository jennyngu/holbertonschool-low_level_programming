#include "main.h"
/**
 *_puts_recursion - prints a string
 *@s: pointer to a string
 *Return: nothing, void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	/*print char at [i]*/
	_putchar(*s);
	/*increase [i] by 1 and print till [i] == '\0'*/
	_puts_recursion(s + 1);
}
