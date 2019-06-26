#include "holberton.h"
/**
 * times_table - Table of 1 until 9
 * @n: table until 15
 *
 * Return: any
 */
void print_times_table(int n)
{
	int line, colum;

	for (line = 0; line <= 9; line++)
	{
		for (colum = 0; colum <= 9; colum++)
		{
			if (line * colum < 10)
			{
				if (colum != 0)
				{
					_putchar (44);
					_putchar (32);
					_putchar (32);
				}
				_putchar ((line * colum) % 10 + '0');
			}
			else
			{
				_putchar (44);
				_putchar (32);
				_putchar ((line * colum) / 10 + '0');
				_putchar ((line * colum) % 10 + '0');
			}
		}
		_putchar(10);
	}
}
