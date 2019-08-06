#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: double pointer
 * @index: number of nodes
 *
 * Return: the nth node nad if that not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cpy = head;
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		cpy = cpy->next;
		if (cpy == NULL)
			return (NULL);
	}
	return (cpy);
}
