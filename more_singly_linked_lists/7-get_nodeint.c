#include "lists.h"

/**
 *get_nodeint_at_index - gets nth node of a listint_t linked list
 *@head: pointer to head of list
 *@index: index of node (starting at 0)
 *Return: nth node of listint_t list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;

	current_node = head;
	if (head == NULL)
	{
		return (NULL);
	}
	else if (index == 1)
	{
		head = current_node->next;
		return (head);
	}
	else
	{
		while (index != 1)
		{
			current_node = current_node->next;
			index = index - 1;
		}
		return (current_node->next);
	}
}
