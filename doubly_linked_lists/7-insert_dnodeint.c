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
	unsigned int i;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	ptr = *h;
	i = 0;
	while (ptr != NULL && i != idx)
	{
		ptr = ptr->next;
		i = i + 1;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->prev->next = new_node;
	new_node->prev = ptr->prev;
	new_node->next = ptr;
	ptr->prev = new_node;
	return (new_node);
}
