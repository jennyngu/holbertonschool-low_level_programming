#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts new node at a given position
 *@h: pointer to pointer to head node
 *@idx: index where new node should be add
 *@n: integer data of new node
 *Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	ptr = *h;
	while (ptr != NULL)
	{
		if (idx == 1)
		{
			new_node->next = ptr->next;
			new_node->prev = ptr;
			ptr->next = new_node;
			if (new_node->next != NULL)
			{
				new_node->next->prev = new_node;
			}
			return (new_node);
		}
		ptr = ptr->next;
		idx = idx - 1;
	}
	return (NULL);
}
