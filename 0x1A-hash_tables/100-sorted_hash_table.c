#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table
 * @size: the size of the array
 *
 * Return: pointer to the created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht = NULL;

	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);

	sht->size = size;
	sht->array = calloc(size, sizeof(shash_node_t *));
	if (!sht->array)
	{
		free(sht);
		return (NULL);
	}
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}

/**
 * shash_djb2 - hash function implementing the djb2 algorithm
 * @str: string input
 *
 * Return: hash value
 */
unsigned long int shash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}

/**
 * shash_key_index - gives the index of a key
 * @key: the key input
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int shash_key_index(const unsigned char *key,
		unsigned long int size)
{
	return (shash_djb2(key) % size);
}

/**
 * create_shash_node - creates a new sorted hash node
 * @key: the key
 * @value: the value
 *
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *new_node = NULL;

	new_node = malloc(sizeof(shash_node_t));
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

	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	return (new_node);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	unsigned long int index;

	if (!key || !value || !ht)
		return (0);

	index = shash_key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new_node = create_shash_node(key, value);
	if (!new_node)
		return (0);

	if (ht->array[index])
		new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
