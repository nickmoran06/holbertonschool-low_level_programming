#include "lists.h"

/**
 * print_listint - a function that prints all elements
 * @h: pointer to struct
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cpy;
	int count = 0;

	cpy = h;
	while (cpy)
	{
		printf("%d\n", cpy->n);
		cpy = cpy->next;
		count++;
	}
	return (count);
}
