#include "holberton.h"
/**
 * _strpbrk - Write a function that searches/
 * a string for any of a set of bytes.
 * @s: string
 * @accept: part of string
 * Return: 0 success
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		for (b = 0; accept[b]; b++)
		{
			if (accept[b] == s[a])
				return (s + a);
		}
		a++;
	}
	return (0);
}
