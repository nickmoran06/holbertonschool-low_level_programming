#include "lists.h"

/**
 * get_dnodeint_at_index - function tofind a specific node of a linked list
 *
 * @head: double pointer to the beginning node of the linked list
 * @index: index of the node
 *
 * Return: pointer to the indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *node = NULL;

	if (!head)
		return (NULL);
	node = head;
	while (counter < index)
	{
		node = node->next;
		if (!node)
			return (NULL);
		counter++;
	}
	if (index == 0)
		return (head);

	return (node);
}
