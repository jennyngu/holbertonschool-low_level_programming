#include "lists.h"

/**
 *sum_listint - sums of all the data (n) of a listint_t linked list
 *@head: pointer to head of list
 *Return: the sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;
	int total;

	total = 0;
	ptr = head;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		ptr = head->next;
		sum = head->n + ptr->n;
		head = ptr->next;
		total = total + sum;
	}
	return (total);
}
