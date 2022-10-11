#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: destination where string is appended
 *@src: source where string comes from
 *Return: pointer to the resulting string dest
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
char *_strcat(char *dest, char *src)
{
	int i;
	int length1;
	int length2;

	length1 = _strlen(dest);
	length2 = _strlen(src);
	i = 0;
	while (i <= length2)
	{
		dest[length1 + i] = src[i];
		i++;
	}
	dest[length1 +1] = '\0';
	return (dest);
	/**while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
	*/
}
