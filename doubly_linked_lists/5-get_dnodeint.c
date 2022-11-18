#include "lists.h"

/**
 *get_dnodeint_at_index - transverses through a list to find the nth node
 *@head: pointer to head node
 *@index: nth node to be found
 *Return: nth node or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	i = 0;
	ptr = head;
	while (head != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
		ptr = head->next;
		head = ptr;
		i = i + 1;
	}
	return (NULL);
}
