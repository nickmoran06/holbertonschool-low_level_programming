#include "hash_tables.h"

/**
 * add_hash - adds a node at the beginning of a hash table's index
 *
 * @head: double pointer to the first node of the hash table's index
 * @key: key of the hash
 * @value: value to store
 *
 * Return: double pointer pointing to the linked list
 */
hash_node_t *add_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *cpy = NULL;

	cpy = *head;
	while (cpy != NULL)
	{
		if (strcmp(key, cpy->key) == 0)
		{
			free(cpy->value);
			cpy->value = strdup(value);
			return (*head);
		}
		cpy = cpy->next;
	}

	cpy = malloc(sizeof(hash_node_t));
	if (!cpy)
		return (NULL);

	cpy->key = strdup(key);
	cpy->value = strdup(value);
	cpy->next = *head;
	*head = cpy;

	return (*head);
}

/**
 * hash_table_set - sets a key to a value in the hash table
 *
 * @ht: hash table to add
 * @key: key for data
 * @value: the data to store
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node;

	if (!ht || !ht->array || ht->size == 0)
		return (0);
	if (strlen(value) == 0 || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	hash_node = add_hash(&(ht->array[index]), key, value);
	if (!hash_node)
		return (0);

	return (1);
}
