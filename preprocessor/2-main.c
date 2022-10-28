#include <stdio.h>

/**
 *main - print name of file it was complied from
 *@argc: number of command line args
 *@argv: pointer to array containing command line args
 *Return: 0 if successful
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
