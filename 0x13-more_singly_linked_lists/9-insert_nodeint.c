#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts\
 * a new node in a given position.
 *
 * @head: double pointer
 * @idx: index of number of nodes
 * @n: integer inthe structure
 *
 * Return: The adress of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cpy = *head;
	listint_t *new;
	unsigned int count;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (count = 1; count < idx; count++)
		{
			if (!cpy)
				return (NULL);
			cpy = cpy->next;
		}
		new->next = cpy->next;
		cpy->next = new;
	}
	return (new);
}
