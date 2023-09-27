#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a hash table.
 * @ht: The hash table.
 * @key: The key.
 *
 * Return: The value associated with the key, or NULL if the key doesn't exist.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
