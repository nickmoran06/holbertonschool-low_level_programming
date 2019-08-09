#include "holberton.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: integer to check
 * @index: index to find bit
 *
 * Return: value of bit at given index, -1 in an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 4))
		return (-1);
	else
		return (n >> index & 1);
}
