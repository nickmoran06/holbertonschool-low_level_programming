#include "holberton.h"

/**
 * print_last_digit - Print the last digit
 * s: the last digit of a number
 * @n: any number
 * Return: s success
 */
int print_last_digit(int n)
{
	int nn;

	if (n < 0)
	{
		n = n * -1;
	}
	nn = n % 10;
	_putchar(nn + '0');
	return (nn);
}
