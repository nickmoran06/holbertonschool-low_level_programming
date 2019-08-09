#include "holberton.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to unsigned int
 * @index: index value to be converted
 *
 * Return: 1 success or -1  error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);

	return (1);
}
