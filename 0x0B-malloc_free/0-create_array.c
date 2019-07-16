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
	char *n;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	n = malloc(size * sizeof(char));
	if (n == NULL)
		return (NULL);
	while (i < size)
	{
		n[i] = c;
		i++;
	}
	return (n);
}
