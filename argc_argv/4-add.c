#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers in the command line
 *@argc: number of arguments in the command line
 *@argv: pointer to an array containing the program command line arguments
 *Return: 1 if command line contains non-digits, 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j = j + 1;
		}
		sum = sum + atoi(argv[i]);
		i = i + 1;
	}
	printf("%d\n", sum);
	return (0);
}
