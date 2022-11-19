#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node at an index
 *@head: pointer to pointer to head
 *@index: index of node that should be deleted
 *Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *head_ptr;
	unsigned int i;

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
	i = 0;
	while (head_ptr != NULL)
	{
		if (i == index - 1)
		{
			tmp = head_ptr->next;
			head_ptr->next = tmp->next;
			free(tmp);
			return (1);
		}
		if (head_ptr->next != NULL)
		{
			head_ptr = head_ptr->next;
		}
		i = i + 1;
	}
	return (-1);
}
