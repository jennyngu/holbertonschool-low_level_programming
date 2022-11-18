#include "lists.h"

/**
 *sum_dlistint - sums all the data of the list
 *@head: pointer to head node
 *Return: sum of all data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;
	int total;

	total = 0;
	ptr = head;
	if (head == NULL)
	{
		return (0);
	}
	if (head->next == NULL)
	{
		return (head->n);
	}
	while (head != NULL)
	{
		ptr = head->next;
		sum = head->n + ptr->n;
		total = total + sum;
		head =  ptr->next;
	}
	return (total);
}
