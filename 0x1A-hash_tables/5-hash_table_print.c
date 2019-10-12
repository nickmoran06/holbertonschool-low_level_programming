#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table
 *
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cpy = NULL;
	unsigned long int index = 0;
	unsigned int comma_indicator = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	while (index < ht->size)
	{
		cpy = ht->array[index];
		while (cpy != NULL)
		{
			if (comma_indicator == 1)
				printf(", ");
			printf("'%s': '%s'", cpy->key, cpy->value);
			comma_indicator = 1;
			cpy = cpy->next;
		}
		index++;
	}

	printf("}\n");
}
