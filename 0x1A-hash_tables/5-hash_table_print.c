#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	char *comma = "";

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
