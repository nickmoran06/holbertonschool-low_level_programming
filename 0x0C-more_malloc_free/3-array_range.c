#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value that have to entry
 * @max: max value that have to entry
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		*(p + i) = min + i;
	return (p);
}
