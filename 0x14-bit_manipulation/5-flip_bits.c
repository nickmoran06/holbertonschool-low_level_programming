#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits\
 * you would need to flip to get from one number to another.
 * @n: number to compare 1
 * @m: number to compare 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int keep = 0;
	unsigned long int diff_bits = 0;

	diff_bits = (n ^ m);
	while (diff_bits > 0)
	{
		if (diff_bits & 1)
			keep += 1;
		diff_bits >>= 1;
	}
	return (keep);
}
