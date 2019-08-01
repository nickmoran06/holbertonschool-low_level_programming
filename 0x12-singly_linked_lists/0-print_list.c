#include "lists.h"

/**
 * print_list -  a function that prints all the elements of a list_t list
 *
 * @h: pointer to
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] %p\n", h->str);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
