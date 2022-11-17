#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: pointer to pointer to head
 *@n: new num to be added to the end of list
 *Return:  address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new_num;

	ptr = *head;
	new_num = malloc(sizeof(listint_t));
	if (new_num == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_num;
		return (*head);
	}
	new_num->n = n;
	new_num->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_num;
	return (ptr);
}
