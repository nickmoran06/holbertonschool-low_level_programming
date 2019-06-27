#include "holberton.h"
/**
 * print_numbers - print since 1 to 9
 *
 * Return: 0 to success
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
