#include "holberton.h"
/**
 * _islower - check a lowercase character
 *
 * return 1 - if c is lowercase
 * return 0 - otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar(10);
}
