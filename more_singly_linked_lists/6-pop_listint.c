#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to pointer to list
 *Return: the int contained in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int value;

	current_node = *head;
	if (*head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	*head = current_node->next;
	free(current_node);
	return (value);
}
