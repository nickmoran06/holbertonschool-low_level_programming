#include "lists.h"

/**
 * add_node_end - function to add node in the end
 * @head: double pointer
 * @str: pointer to string
 *
 * Return: adress of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *cpy;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
        for (counter = 0; new->len; counter++)
		;
	new->len = counter;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	cpy = *head;
	while (cpy->next)
		cpy = cpy->next;
	cpy->next = new;
	return (new);
}
