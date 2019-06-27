#include "holberton.h"
/**
 * print_square - print a square of any specific size
 *
 * @size: number in height and weight
 * Return
 */
void print_square(int size)
{
	int line, column;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (line = 0; line < size; line++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
