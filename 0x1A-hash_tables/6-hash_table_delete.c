#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (!ht || !ht->array)
		return;

	/* For each index in the table */
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		/* Traverse the linked list and free each node */
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	/* Free the array and the hash table itself */
	free(ht->array);
	free(ht);
}
