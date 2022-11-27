#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: pointer to hash table
 *Return: Nothing, void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	hash_node_t *tmp;

	i = 0;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			tmp = ptr;
			ptr = ptr->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
