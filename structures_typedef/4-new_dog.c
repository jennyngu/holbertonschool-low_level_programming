#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *Return: struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
