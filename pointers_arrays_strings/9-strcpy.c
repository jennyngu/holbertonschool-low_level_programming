#include "main.h"
/**
 *_strcpy - copies a string pointed to by source, including \0, to destination
 *@dest: pointer parameter, where the string gets copied to
 *@src: pointer parameter, where string is copied from
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		/*iterate through i in src and make dest = to it*/
		dest[i] = src[i];
		i++;
	}
	/*dest[last index] is = \'0'*/
	dest[i] = '\0';
	return (dest);
}
