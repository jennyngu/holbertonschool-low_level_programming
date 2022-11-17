#include "lists.h"

/**
 *listint_len - finds number of elements in listint_t list
 *@h: pointer to head of struct listint_t
 *Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
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
