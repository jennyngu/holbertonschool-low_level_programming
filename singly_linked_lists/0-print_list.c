#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@h: pointer to elements of struct list_t
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL) /*empty list*/
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i = i + 1;
	}
	return (i);
}
