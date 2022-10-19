#include "main.h"
#include <stdio.h>

/**
 *main - prints all arguments the command line receives
 *@argc: number of command line arguments
 *@argv: pointer to an array containing the program command line arguments
 *Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
