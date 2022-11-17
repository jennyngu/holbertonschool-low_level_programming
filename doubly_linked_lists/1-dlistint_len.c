#include "lists.h"

/**
 *dlistint_len - searches through the number of elements in a list
 *@h: pointer to head node
 *Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i = i + 1;
	}
	return (i);
}
