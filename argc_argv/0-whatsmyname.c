#include "main.h"
#include <stdio.h>
/**
 *main - prints the program name in the command line
 *@argc: number of command line arguments
 *@argv: pointer to an array containing the program command line arguments
 *Return: 0 if successful
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
