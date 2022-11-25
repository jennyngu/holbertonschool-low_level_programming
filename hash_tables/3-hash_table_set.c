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
	int hash_index;

	if (key == NULL)
	{
		return (0);
	}
	new_item = malloc(sizeof(new_item));
	new_item->key = strdup(key);
	new_item->value = strdup(value);
	hash_index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[hash_index] != NULL && ht->array[hash_index]->key != NULL)
	{
		hash_index = hash_index + 1;
		hash_index = hash_index % (ht->size);
	}
	ht->array[hash_index] = new_item;
	return (1);
}
