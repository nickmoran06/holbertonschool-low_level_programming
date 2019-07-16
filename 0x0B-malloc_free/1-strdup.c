#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to/
 * a newly allocated space in memory, which contains/
 * a copy of the string given as a parameter.
 * @str: string
 *
 * Return: NULL if str equal NULL,/
 * a pointer to a new string which is a duplicate of the string str.
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i = 0;
	unsigned int j;

	if (str == 0)
		return (NULL);
	while (str[i])
		i++;
	a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = str[j];
	return (a);
}
