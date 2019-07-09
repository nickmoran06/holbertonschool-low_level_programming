#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: string
 * @size: size of the matrice
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n = 0, m = 0, o = 0;

	while (n < size)
	{
		m = m + a[(size * n) + n];
		o = o + a[(size - 1) * (n + 1)];
		n++;
	}
	printf("%d, %d\n", m, o);
}
