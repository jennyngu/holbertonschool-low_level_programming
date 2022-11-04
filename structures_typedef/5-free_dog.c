#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - frees my_dog function
 *@d: pointer to struct
 *Return: Nothing, void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
