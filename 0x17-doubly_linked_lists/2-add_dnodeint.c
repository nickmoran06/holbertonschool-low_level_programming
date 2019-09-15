#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 *
 * @head: double pointer to the beginning of the linked list
 * @n: value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (!head)
	{
		new_node->next = *head;
		new_node->prev = NULL;
	}
	*head = new_node;
	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;

	return (new_node);
}
