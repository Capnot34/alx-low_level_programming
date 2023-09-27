#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array in the hash table
 *
 * Return: pointer to the new hash table, or NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	/* Step 1: Allocate memory for the hash table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Step 2: Allocate memory for the array inside the hash table */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	/* Step 3: Initialize all array pointers to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	/* Set the size of the hash table */
	new_table->size = size;

	/* Step 4: Return the pointer to the newly created hash table */
	return (new_table);
}






