#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *init_dog - initialises variable of type struct dog
 *@d: pointer to struct
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *Return: nothing, void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
