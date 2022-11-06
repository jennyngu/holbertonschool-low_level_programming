#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - adds parameters
 *@a: first parameter
 *@b: second paramter
 *Return: sum of parameters
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts parameters
 *@a: first parameter
 *@b: second paramter
 *Return: difference of parameters
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies parameters
 *@a: first parameter
 *@b: second paramter
 *Return: product of parameters
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides parameters
 *@a: first parameter
 *@b: second paramter
 *Return: result of a division of parameters
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - gets remainder of a divided by b
 *@a: first parameter
 *@b: second paramter
 *Return: remainder of the division of parameters
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
