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
	unsigned long int set_bit;

	if (index > (sizeof(unsigned long int)))
		return (-1);

	set_bit = 1 << index;
	*n = *n | set_bit;

	return (1);
}
