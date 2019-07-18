#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: string 1
 * @height: string 2
 * Return: NULL if fail, pointer success
 */
void free_grid(int **grid, int height)
{
	int n;

	if (!grid && height <= 0)
		return;
	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
