#include "lists.h"

/**
 *free_listint2 - frees listint_t list
 *@head: pointer to pointer to head of list
 *Return: Nothing, void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
