#include "holberton.h"

/**
 * print_binary_diff_0 - function to print binary different to 0
 * @n: integer
 *
 * Return: void
 */
void print_binary_diff_0(unsigned long int n)
{
	if (n > 0)
	{
		print_binary_diff_0(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n != 0)
		print_binary_diff_0(n);
	else
		_putchar('0');
}
