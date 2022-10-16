#include "main.h"
/**
 *leet - replaces specific letters with numbers
 *@c: pointer to string
 *return: replaced string
 */

char *leet(char *c)
{
	int i;
	int j;
	int letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int numbers[] = {'4',  '3', '0', '7', '1'};

	i = 0;
	/*iterate through c string until '\0'*/
	while (c[i] != '\0')
	{
		j = 0;
		/*iterate through letters array*/
		while (letters[j] != '\0')
		{
			if (c[i] == letters[j])
			{
				c[i] = numbers[j / 2];
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (c);
}
