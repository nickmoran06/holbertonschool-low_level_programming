#include "holberton.h"
/**
 * _islower - function to return
 * @c: variable
 * Return: 1 for success
 * struct _islower - check a lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
