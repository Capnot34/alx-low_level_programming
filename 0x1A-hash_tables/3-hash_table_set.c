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
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	return new_node;
}

int update_node_value(hash_node_t *node, const char *value)
{
	free(node->value);
	node->value = strdup(value);
	return (node->value ? 1 : 0);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *current;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	for (current = ht->array[idx]; current; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
			 return update_node_value(current, value);
	}

	current = create_new_node(key, value);
	if (!current)
		return (0);

	current->next = ht->array[idx];
	ht->array[idx] = current;
	return (1);
}
