#include "lists.h"

/**
 *free_list - frees struct called list_t
 *@head: pointer to list_t
 *Return: Nothing, void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
