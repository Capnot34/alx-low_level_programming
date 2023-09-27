#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key/value pair in the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *current;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
