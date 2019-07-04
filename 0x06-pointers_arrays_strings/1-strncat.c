#include "holberton.h"
/**
 * _strncat - concatenate two strings with a integer limit
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest to success
 */
char *_strncat(char *dest, char *src, int n)
{
	int s = 0, d = 0;

	while (*(dest + s) != '\0')
		s++;
	while (n > 0)
	{
		dest[s] = src[d];
		s++;
		d++;
		n--;
	}
	dest[s] = 0;
	return (dest);
}
