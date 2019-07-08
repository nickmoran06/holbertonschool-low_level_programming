#include "holberton.h"
/**
 * print_number - print an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int i, c = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i = n;

		while (i > 9)
		{
			i /= 10;
			c *= 10;
		}

		while (c >= 1)
		{
			_putchar(((n / c) % 10) + '0');
			c /= 10;
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		i = n;

		while (i > 9)
		{
			i /= 10;
			c *= 10;
		}

		while (c >= 1)
		{
			_putchar(((n / c) % 10) + '0');
			c /= 10;
		}
	}
}
