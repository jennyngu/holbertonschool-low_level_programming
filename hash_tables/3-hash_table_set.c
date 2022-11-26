#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table that is to be updated
 *@key: the key
 *@value: value associated with key
 *Return: 1 on success. 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item;
	unsigned long int h_index;
	unsigned long int i;

	if (key == NULL || ht == NULL || value == NULL)
	{
		return (0);
	}
	h_index = key_index((const unsigned char *)key, ht->size);
	i = h_index;
	while (ht->array[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
		i = i + 1;
	}
	new_item = malloc(sizeof(*new_item));
	if (new_item == NULL)
	{
		return (0);
	}
	new_item->key = strdup(key);
	new_item->value = strdup(value);
	new_item->next = ht->array[h_index];
	ht->array[h_index] = new_item;
	return (1);
}
