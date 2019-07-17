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
	int **a;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int));
	if (!a)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (!a[i])
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
