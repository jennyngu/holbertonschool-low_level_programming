#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiplies two numbers entered on the command line
 *@argc: number of command line arguments
 *@argv: pointer to an array containing the program command line arguments
 *Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int input1;
	int input2;
	int result;

	if (argc == 3)
	{
		input1 = atoi(argv[1]);
		input2 = atoi(argv[2]);
		result = input1 * input2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
