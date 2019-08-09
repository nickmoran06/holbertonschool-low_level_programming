#include "holberton.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else if (n == 0)
	{
		putchar (0 + '0');
	}

}
