#include "holberton.h"

/**
 * _sqrt_recursion - Write a function that returns
 * the natural square root of a number.
 * @n: root of numbers
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (calculate_sqrt_root(n, 1));
}

/**
 * calculate_sqrt_root - support
 * @n: integer
 * @i: exponent
 * Return: calculate_sqrt_root to success;
 */

int calculate_sqrt_root(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (calculate_sqrt_root(n, i + 1));
	else
		return (-1);
}
