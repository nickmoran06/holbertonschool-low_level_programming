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
	int counter;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[%i] %p\n", 0, h->str);
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
