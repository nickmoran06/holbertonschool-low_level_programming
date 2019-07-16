#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if fail, pointer success
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	if (!s1)
		s1 = ("");

	if (!s2)
		s2 = ("");

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	a = malloc((i + j) * sizeof(char) + 1);

	if (!a)
		return (NULL);

	for (k = 0; k < i; k++)
		a[k] = s1[k];

	for (k = 0; k < j; k++)
		a[k + i] = s2[k];

	a[k + i] = 0;
	return (a);
}
