#include "main.h"
#include <stdio.h>
/**
 *main - prints number of arguments
 *@argc: number of command line arguments
 *@argv: pointer to an array containing the program command line arguments
 *Return: 0 if successful
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
