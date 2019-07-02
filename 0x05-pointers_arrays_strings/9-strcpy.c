#include "holberton.h"
/**
 * _strcpy - copy a string pointed
 * @dest: string that should be src
 * @src: string that should be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n))
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = 0;
	return (dest);
}
