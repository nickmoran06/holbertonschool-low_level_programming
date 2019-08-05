#include "lists.h"

/**
 * listint_len - a function the number of elements
 * @h: pointer to struct
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cpy;
	int count = 0;

	cpy = h;
	while (cpy)
	{
		cpy = cpy->next;
		count++;
	}
	return (count);
}
