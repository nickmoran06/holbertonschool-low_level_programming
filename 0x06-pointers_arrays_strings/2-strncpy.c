#include "holberton.h"
/**
 * _strncpy - copy a string
 * @dest: string
 * @src: destiny (pasting)
 * @n: integer
 * Return: dest to success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (s < n && src[s] != 0)
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = 0;
		s++;
	}
	return (dest);
}
