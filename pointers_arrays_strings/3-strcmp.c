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
	int difference;

	i = 0;
	/*indexes of s1 and  s2 arent null char*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/*find difference*/
		if (s1[i] != s2[i])
		{
			difference = s1[i] - s2[i];
			break;
		}
		else
		{
			difference = s1[i] - s2[i];
		}
		i++;
	}
	return (difference);
}
