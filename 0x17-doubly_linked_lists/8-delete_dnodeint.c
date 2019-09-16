#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 *
 * @head: double pointer to the first node of the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int counter = 0;

	if (!(*head))
		return (-1);
	tmp = *head;
	if (index != 0)
	{
		while (counter < index)
		{
			if (tmp->next == NULL)
				return (-1);
			tmp = tmp->next;
			counter++;
		}
		(tmp->prev)->next = tmp->next;
		if (tmp->next != NULL)
			(tmp->next)->prev = tmp->prev;
		free(tmp);
	}
	else
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			(tmp->next)->prev = NULL;
		free(tmp);
	}
	return (1);
}
