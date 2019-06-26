#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit
 *
 * @n: variable
 *
 * Return: the value of last digit
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
