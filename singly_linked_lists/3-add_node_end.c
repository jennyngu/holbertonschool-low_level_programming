#include "lists.h"

/**
 *_strlen - returns the length of a string
 *@s: *s is a pointer that is a char type parameter
 *Return: return 0 if successful
 */

int _strlen(const char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 *add_node_end - adds new node at the end of list_t
 *@head: pointer to pointer to list_t
 *@str: pointer to string
 *Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (str == NULL)
	{
		free(new_node->str);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (ptr);
}
