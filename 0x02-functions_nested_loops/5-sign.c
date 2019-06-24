#include "holberton.h"
/**
 * print_sign - check the sign
 * n - value for function
 * Return - 1 and prints + if n is greater than zero
 * Return - 0 and prints 0 if n is zero
 * Return - -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else 
	{
		if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		else
	{
		_putchar('-');
		return (-1);
	}
	}
	_putchar(10);
}
