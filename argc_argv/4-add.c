#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_isalpha - checks for alphabet characters
 *@c: is the argument passed into the function ie. is being checked
 *Return: return 1 if the c argument is a letter, return 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 *main - adds positive numbers in the command line
 *@argc: number of arguments in the command line
 *@argv: pointer to an array containing the program command line arguments
 *Return: 1 if command line contains non-digits, 0 if successful
 */

int main(int argc, char **argv)
{
	int i;
	int sum;

	i = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (_isalpha(*argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
			i = i + 1;
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
