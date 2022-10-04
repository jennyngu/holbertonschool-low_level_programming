#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@n: is the input number
 *Return: returns the value of the last digit
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = (x * -1);
	}
	_putchar('0' + x);
	return (x);
}
