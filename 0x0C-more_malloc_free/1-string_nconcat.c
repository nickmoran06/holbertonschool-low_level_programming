#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of the second string
 *
 * Return: a pointer to success, NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l;
	char *p;

	if (!s1)
		i = 0;
	else
		while (s1[i])
			i++;

	if (!s2)
		j = 0;
	else
		while (s2[j])
			j++;
	if (j > n)
		j = n;

	p = malloc(i + j + 1);
	if (!p)
		return (NULL);

	for (l = 0; l < i; l++)
		p[l] = s1[l];

	for (l = 0; l < j; l++)
		p[l + i] = s2[l];

	p[l + i] = 0;

	return (p);
}
