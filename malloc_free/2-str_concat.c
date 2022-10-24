#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
 *str_concat - concatenates two string arguments
 *@s1: first pointer to a string
 *@s2: second pointer to a string
 *Return: concatenated string, empty string if NULL, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	char *cat;
	unsigned int concat_len;
	unsigned int s1_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = string_length(s1);
	/*get full length of concatenated string to assign memory space*/
	concat_len = string_length(s1) + string_length(s2);
	cat = malloc((concat_len + 1) * sizeof(*cat));
	if (cat == NULL)
	{
		return (NULL);
	}
	i = 0;
	/*iterate through s1 & pass it to the start of the concatenated string*/
	while (i < s1_len)
	{
		cat[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	/*at this point i is at the end of the string*/
	/*iterate through s2 to add onto end of concatenated string*/
	while (i <= concat_len)
	{
		cat[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	return (cat);
}
