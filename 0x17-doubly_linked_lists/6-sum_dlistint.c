#include "lists.h"

/**
 * sum_dlistint - function to sum all of the data of a dlistint_t linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cpy = NULL;

	if (!head)
		return (0);
	cpy = head;
	while (cpy)
	{
		sum += cpy->n;
		cpy = cpy->next;
	}

	return (sum);
}
