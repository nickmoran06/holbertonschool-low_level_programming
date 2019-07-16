#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of the string lenght
 * @c: character
 *
 * Return: NULL if size is equal to 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *n;

	if (size == 0)
		return (NULL);
	n = malloc(size * sizeof(char));
	if (n == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}
	return (n);
}
