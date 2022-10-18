#include "main.h"
#include <stdio.h>
/**
 *main - prints the program name in the command line
 *@argc: number of command line arguments
 *@argv: pointer to an array containing the program command line arguments
 *Return: 0 if successful
 */

int main(int argc, char **argv)
{
	while ((argc = argc - 1))
	{
		printf("%s\n", *argv = *argv + 1);
	}
	return (0);
}
