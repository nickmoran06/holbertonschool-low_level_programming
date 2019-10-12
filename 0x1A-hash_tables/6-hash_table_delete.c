#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: the hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *cpy = NULL;

	if (!ht || !ht->array)
		return;

	while (index < ht->size)
	{
		while (ht->array[index] != NULL)
		{
			cpy = (ht->array[index])->next;
			free((ht->array[index])->key);
			free((ht->array[index])->value);
			free(ht->array[index]);
			ht->array[index] = cpy;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
