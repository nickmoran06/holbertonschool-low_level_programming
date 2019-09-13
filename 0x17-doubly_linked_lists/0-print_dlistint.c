#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a list
 *
 * @h: header pointer
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_elem;

	for (num_elem = 0; h; num_elem++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_elem);
}
