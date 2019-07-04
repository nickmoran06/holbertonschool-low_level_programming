#include "holberton.h"
/**
 *_strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest to success
 */
char *_strcat(char *dest, char *src)
{
	int n = 0, d = 0;

	while (*(dest + n))
		n++;
	while (*(src + d))
	{
		dest[n] = src[d];
		d++;
		n++;
	}
	dest[n] = 0;
	return (dest);
}
