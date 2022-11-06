#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - main func for simple operations
 *@argc: number of args in command line
 *@argv: pointer to args
 *Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	int answer;
	int (*funcptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	funcptr = get_op_func(argv[2]);
	if (funcptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	answer = (*funcptr)(arg1, arg2);
	printf("%d\n", answer);
	return (0);
}
