#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes node at given index
 *@head: pointer to pointer to head node
 *@index: index where node is to be deleted
 *Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *head_ptr;

	if (*head == NULL)
	{
		return (-1);
	}
	head_ptr = *head;
	if (index == 0)
	{
		tmp = head_ptr->next;
		free(head_ptr);
		*head = tmp;
		return (1);
	}
	while (head_ptr != NULL)
	{
		if (index == 1)
		{
			tmp = head_ptr->next;
			head_ptr->next = tmp->next;
			free(tmp);
			return (1);
		}
		head_ptr = head_ptr->next;
		index = index - 1;
	}
	return (-1);
}
