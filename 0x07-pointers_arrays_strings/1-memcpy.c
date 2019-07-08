#include "holberton.h"
/**
 * _memcpy - Write a function that copies memory area.
 * @dest: destinity
 * @src: main file
 * @n: restriction
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}
	return (dest);
}
