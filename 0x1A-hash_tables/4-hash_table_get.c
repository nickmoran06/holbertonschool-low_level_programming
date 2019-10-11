#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash tosearch into
 * @key: key to find value
 *
 * Return: value associated with key, or NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cpy;

	if (!ht || !ht->array || ht->size == 0)
		return (NULL);
	if (key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	cpy = ht->array[index];
	while (cpy != NULL)
	{
		if (strcmp(cpy->key, key) == 0)
			return (cpy->value);
		cpy = cpy->next;
	}

	return (NULL);
}
