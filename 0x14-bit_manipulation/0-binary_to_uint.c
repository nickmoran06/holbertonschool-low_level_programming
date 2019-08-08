#include "holberton.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int = 0;
	int counter;

	if (!b)
		return (0);

	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		u_int <<= 1;
		if (b[counter] == '1')
			u_int += 1;
	}
	return (u_int);
}
