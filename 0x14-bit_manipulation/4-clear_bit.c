#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp_bit;

	if (index > (sizeof(unsigned long int)))
		return (-1);
	comp_bit = 1 << index;
	*n = *n & ~comp_bit;
	return (1);
}
