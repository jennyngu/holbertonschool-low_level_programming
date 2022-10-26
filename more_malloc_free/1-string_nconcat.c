#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_length - returns length of string pointed to by s
 *@s: pointer to char
 *Return: length
 */

int string_length(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
	}
	return (count);
}

/**
 *string_nconcat - concatenates two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 *@n: number of bytes of s2 to be added to s1
 *Return: concatenated string, NULL if func fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int i;
	unsigned int j;
	char *concatenated;
	/*	unsigned int concat_len;*/

	s1_len = string_length(s1);
	s2_len = string_length(s2);
/*	concat_len = s1_len + s2_len;*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s2_len <= n)
		s2_len = n;
	concatenated = malloc((sizeof(*concatenated) * s1_len) + n);
	if (concatenated == NULL)
		return (NULL);
	i = 0;
	/*iterate to s1 to pass string to start of concatentaed string*/
	while (i < s1_len)
	{
		concatenated[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	/*add on s2 chars while it is < given number of n bytes*/
	while (j < n)
	{
		concatenated[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	concatenated[i] = '\0';
	return (concatenated);
}
