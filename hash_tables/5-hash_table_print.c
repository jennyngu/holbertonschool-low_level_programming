#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: pointer to hash table
 *Return: Nothing, void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	unsigned long int separator;
	hash_node_t *tmp;

	if (ht == NULL)
	{
		return;
	}
	index = 0;
	separator = 0;
	printf("{");
	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (separator != 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			separator = separator + 1;
		}
		index = index + 1;
	}
	printf("}\n");
}
