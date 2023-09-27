#include "hash_tables.h"

/**
 * update_key_value_if_exists - Update the value at
 * a specific key if it exists.
 * @head: Pointer to the beginning of the list at the index.
 * @key: The key.
 * @value: The value.
 *
 * Return: 1 if value updated, 0 otherwise.
 */
static int update_key_value_if_exists(hash_node_t **head,
		const char *key, const char *value)
{
	hash_node_t *current = *head;

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
	return (0);
}

/**
 * create_hash_node - Create a new hash node with given key and value.
 * @key: The key.
 * @value: The value.
 *
 * Return: Pointer to the new hash node.
 */
static hash_node_t *create_hash_node(const char *key, const char *value)
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
	return (new_node);
}

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
	hash_node_t *new_node;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	if (update_key_value_if_exists(&(ht->array[idx]), key, value))
		return (1);

	new_node = create_hash_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
