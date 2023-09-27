#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to get the index for.
 * @size: Size of the array of the hash table.
 *
 * Description: This function uses the djb2 algorithm to get the hash value
 * and then calculates an index for the key to be stored.
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
