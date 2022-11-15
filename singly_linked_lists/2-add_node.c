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
 *add_node - adds new node at the beginner of list_t
 *@head: pointer to pointer to list_t
 *@str: pointer to string
 *Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
