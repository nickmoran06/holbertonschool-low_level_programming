#include "holberton.h"
/**
 * _isupper - check for uppercase character
 * @c: any letter
 * Return: 0 to succes and 1 for uppercase
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
