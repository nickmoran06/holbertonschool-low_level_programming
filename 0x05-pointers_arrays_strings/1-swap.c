#include "holberton.h"
/**
 * swap_int - swap between two variables his value
 * @a: The first pointer to change
 * @b: The second pointer to change
 * Return: 0 to success
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
