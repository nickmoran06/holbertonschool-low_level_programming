#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: double pointer
 * @index: number of node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cpy = *head;
	listint_t *next_node;
	unsigned int count;

	if ((!*head) || (!head))
		return (-1);

	if (index == '0')
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	for (count = 1; count < index; count++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}
	next_node = cpy->next;
	cpy->next = next_node->next;
	free(next_node);

	return (1);
}
