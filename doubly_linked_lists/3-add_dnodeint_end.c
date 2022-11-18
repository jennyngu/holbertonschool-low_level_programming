#include "lists.h"

/**
 *add_dnodeint_end - adds new node to end of list
 *@head: pointer to pointer to head node
 *@n: integer data to be added
 *Return: address of a new element. NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;

	ptr = *head;
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
