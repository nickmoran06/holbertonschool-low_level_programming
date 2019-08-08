#include "holberton.h"

/**
 * print_binary -  a function that prints the binary representation of a number
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int cpy = n;
	unsigned int count = (sizeof(unsigned long int));

	for (count; count > 0; count >> 1)
	{
		if (count & cpy)
			_putchar ('1');
		else
			_putchar ('0');
	}
}
