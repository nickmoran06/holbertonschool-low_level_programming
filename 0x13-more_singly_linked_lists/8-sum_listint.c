#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all data in a linked list
 * @head: double pointer
 *
 * Return: if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *cpy = head;
	unsigned int ans_sum;

	if (cpy == NULL)
		return (0);

	while (cpy)
	{
		ans_sum += cpy->n;
		cpy = cpy->next;
	}
	return (ans_sum);
}
