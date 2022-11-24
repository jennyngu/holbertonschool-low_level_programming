#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = (hash_table_t *) malloc(sizeof(new_table));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = malloc(sizeof(new_table->array) * size);
	if (new_table->array == NULL)
	{
		return (NULL);
	}
	return (new_table);
}
