#include "holberton.h"
/**
 * string_toupper - lowercase to uppercase
 *
 * Return: 0 success
 */
char *string_toupper(char *n)
{
	int d;

	for (d = 0; n[d] != 0; n++)
	{
		if (n[d] >= 'a' && n[d] <= 'z')
			n[d] = n[d] - 32;
	}
	return (n);
}
