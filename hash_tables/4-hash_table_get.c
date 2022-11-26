#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: pointer to the hash table
 *@key: key to find the value
 *Return: value of key or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			return (ht->array[index]->value);
		}
		index = index + 1;
	}
	return (NULL);
}
