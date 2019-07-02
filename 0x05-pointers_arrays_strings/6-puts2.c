#include "holberton.h"
/**
 * puts2 - print one char out of 2
 * @str: The string
 * Return: any
 */
void puts2(char *str)
{
	int n;

	while (*(str + n))
	{
		/*if(str[n] % 2 == 0)
		{
			_putchar (*(str + n));
			n++;
			}*/
		_putchar(str[n]);
		n = n + 2;
	}
	_putchar(10);
}
