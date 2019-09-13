#include "lists.h"

/**
 * dlistint_len - count the number of elements in a doubly linked list
 *
 * @h: pointer to the head of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elem;

	for (num_elem = 0; h; num_elem++)
		h = h->next;
	return (num_elem);
}
