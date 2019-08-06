#include "lists.h"

/**
 * add_nodeint_end - a function to add a node in the beginnig
 * @head: double pointer
 * @n: integer of the struct
 *
 * Return: the first node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *cpy;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	cpy = *head;
	while (cpy->next)
		cpy = cpy->next;
	cpy->next = new;
	new->next = NULL;
	return (*head);
}
