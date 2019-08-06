#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a\
 * listint_t linked list, and returns the head node’s data
 * @head: double pointer
 *
 * Return: the number of nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (!*head)
		return (0);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
