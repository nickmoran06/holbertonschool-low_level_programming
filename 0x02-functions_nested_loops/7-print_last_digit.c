#include "holberton.h"
/**
 * print_last_digit - Print the last digit
 * s: the last digit of a number
 * @n: any number
 * Return: s success
 */
int print_last_digit(int n)
{
	int s;

	if (n < 0)
	{
		s = -n % 10;
	}
	else
	{
		s = n % 10;
	}
	_putchar(s + '0');
	return (s);
}
