#include "lists.h"

/**
 *list_len - transverses elements of linked list list_t
 *@h: pointer to elements of struct list_t
 *Return: returns the number of elements in list_t list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i = i + 1;
		h = h->next;
	}
	return (i);
}
