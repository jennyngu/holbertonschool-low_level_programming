#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: size of has table
 *Return: pointer to new has table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(*new_table));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = malloc(sizeof(new_table->array) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	i = 0;
	while (i < new_table->size)
	{
		new_table->array[i] = NULL;
		i = i + 1;
	}
	return (new_table);
}
