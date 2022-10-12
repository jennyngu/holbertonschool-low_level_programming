#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: pointer arg, pointing to a string
 *@s2: pointer arg, pointing to different string
 *Return: the difference in strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return ((s1[i] > s2[i]) - (s1[i] < s2[i]));
}
