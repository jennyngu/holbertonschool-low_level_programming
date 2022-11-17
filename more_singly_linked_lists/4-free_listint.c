#include "lists.h"

/**
 *free_listint - frees listint_t list
 *@head: pointer to head of list
 *Return: Nothing, void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
