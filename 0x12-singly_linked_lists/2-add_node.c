#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 * @head: pointer to the new struct
 * @str: new string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int counter = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	while (str[counter])
		counter++;
	new->len = counter;
	new->next = *head;
	*head = new;
	return (*head);
}
