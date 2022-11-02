#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
 *_strdup - returns pointer to allocated space in mem containing string
 *@str: contains a string that will be duplicated
 *Return: returns pointer to new string (duplicate of str), NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *str_cpy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	/*allocate string_copy memory space of str length * size of char*/
	str_cpy = (char *) malloc((string_length(str) + 1) * sizeof(*str_cpy));
	if (str_cpy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		str_cpy[i] = str[i];
		i = i + 1;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *Return: struct dog_t (d)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
