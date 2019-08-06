#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: double pointer
 *
 * Return: the number of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
	free(tmp);
}
