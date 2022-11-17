#include "lists.h"

/**
 *add_dnodeint - adds new node at the beginning of a list
 *@head: pointer to pointer to head node
 *@n: integer data that needs to be added
 *Return: address of new element. Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
