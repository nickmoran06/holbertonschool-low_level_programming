#include "holberton.h"
/**
 * puts_half - print the half of a string
 * @str: the string
 * Return: any
 */
void puts_half(char *str)
{
	int counter = 0, printer;

	while (*(str + counter))
		counter++;
	if ((counter % 2) == 0)
	{
		printer = counter / 2;
	}
	else
	{
		printer = (counter + 1) / 2;
	}
	while (*(str + printer))
	{
		_putchar(str[printer]);
		printer++;
	}
	_putchar('\n');
}
