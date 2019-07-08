#include "holberton.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: pointer
 * @b: buffer
 * @n: space required
 * Return: return a pointer to s, so it's s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}
	return (s);
}
