#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer/
 * to a 2 dimensional array of integers.
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: NULL if fail, pointer to success
 */
int **alloc_grid(int width, int height)
{
	char *a;
	unsigned int i = 0;
	unsigned int j;

	if (str == 0)
		return (NULL);
	while (str[i])
		i++;
	i++;
	a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = str[j];
	return (a);
}
