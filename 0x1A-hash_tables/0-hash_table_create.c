#include "hash_tables.h"

/**
 * hash_table_create -  a function that creates a hash table
 *
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly hash table or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_table_t));
	if (!hash_table)
	{
		free(hash_table);
		return (NULL);
	}

	return(hash_table);
}
