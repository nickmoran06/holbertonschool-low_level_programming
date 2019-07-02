#include "holberton.h"
/**
 * puts2 - print one char out of 2
 * @str: The string
 * Return: any
 */
void puts2(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		if ((n % 2) == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar(10);
}
