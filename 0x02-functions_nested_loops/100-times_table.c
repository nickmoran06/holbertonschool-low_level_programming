#include "holberton.h"
/**
 * print_times_table - Table of 1 until 9
 * @n: table until 15
 *
 * Return: any
 */
void print_times_table(int n)
{
	int line, colum;

	if (n < 16 && n >= 0)
	{
	for (line = 0; line <= n; line++)
	{
		for (colum = 0; colum <= n; colum++)
		{
			if (line * colum < 10)
			{
				if (colum != 0)
				{
					_putchar (44);
					_putchar (32);
					_putchar (32);
					_putchar (32);
				}
				_putchar ((line * colum) % 10 + '0');
			}
			else if (line * colum < 100)
			{
				_putchar (44);
				_putchar (32);
				_putchar (32);
				_putchar ((line * colum) / 10 + '0');
				_putchar ((line * colum) % 10 + '0');
			}
			else
			{
				_putchar (44);
				_putchar (32);
				_putchar ((line * colum) / 100 + '0');
				_putchar (((line * colum) / 10) % 10 + '0');
				_putchar ((line * colum) % 10 + '0');
			}
		}
		_putchar(10);
	}
	}
}
