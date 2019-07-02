#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array
 * @a: pointer
 * @n: variable
 * Return: any
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", *(a + s));
		if (s < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
