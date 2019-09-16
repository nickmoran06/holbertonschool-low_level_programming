#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: double pointer to the first node of the linked list
 * @idx: index to insert the new node
 * @n: integer data to enter into the new node
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *prev = NULL, *next = NULL;
	unsigned int counter = 0;

	if (!(*h))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx != 0)
	{
		prev = *h;
		while (counter < (idx - 1) && prev)
		{
			if (!prev)
				return (NULL);
			prev = prev->next;
			counter++;
		}
		next = prev->next;
		prev->next = new;
		new->prev = prev;
		new->next = next;
	}
	else
	{
		new->next = *h;
		*h = next;
		new->prev = NULL;
		*h = new;
	}
	if (new->next != NULL)
		(next)->prev = new;

	return (new);
}
