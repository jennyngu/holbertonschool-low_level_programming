#include "hash_tables.h"

/**
 *key_index - gives index of a key
 *@key: pointer to the key
 *@size: size of array of hash table
 *Return: index of key/value pair in array of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key) % size;
	return (key_index);
}
