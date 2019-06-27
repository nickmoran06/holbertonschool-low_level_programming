#include "holberton.h"
/**
 * print_line - print a n number or distance of a line
 * @n: number of distance
 * Return: 0 success
 */
void print_line(int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		_putchar(95);
	}
	_putchar(10);
}
