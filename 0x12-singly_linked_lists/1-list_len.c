#include "lists.h"

/**
 * list_len - return the number of elements in the list
 *
 * @h: pointer to the linked list
 *
 * Return: counter
 */
size_t list_len(const list_t *h)
{
	int counter;

	for (counter = 0; h; counter++)
		h = h->next;
	return (counter);
}
