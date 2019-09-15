#include "lists.h"

/**
 * free_dlistint - function to free a doubly linked list list
 * @head: pointer to the first node of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	if (!head)
		return;
	while (head->next)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(head);
}
