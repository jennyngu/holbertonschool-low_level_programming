#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: destination where string is appended
 *@src: source where string comes from
 *Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	/*iterating through first string*/
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	/*iterating through second string*/
	while (src[j] != '\0')
	{
		/*at this point index i in dest[i] is at the end of the string*/
		/*concat start of src[j] to end of dest[i] string*/
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
