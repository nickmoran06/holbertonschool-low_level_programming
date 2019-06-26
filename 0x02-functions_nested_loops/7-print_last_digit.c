#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: variable
 *
 * Return: LAST DIGIT BRO
 */
int print_last_digit(int i)
{
	int AS;

	AS = i % 10;

	if (i >= 0)
	{
		_putchar(AS + '0');
	}
	else
	{
		AS = AS * -1;
		_putchar(AS + '0');
	}

	return (AS);
}
