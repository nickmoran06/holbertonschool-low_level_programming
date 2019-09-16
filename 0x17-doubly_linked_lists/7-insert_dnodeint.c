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
	dlistint_t *new = NULL, *current = NULL, *next = NULL;
	unsigned int counter = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	current = *h;
	if (idx != 0)
	{
		while (counter < (idx - 1) && current)
		{
			if (!current)
				return (NULL);
			current = current->next;
			counter++;
		}
		next = current->next;
		current->next = new;
		new->next = next;
		if (new->next != NULL)
		{
			next->prev = new;
		}
	}
	else
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
	}

	return (new);
}
