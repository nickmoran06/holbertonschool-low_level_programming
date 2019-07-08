#include "holberton.h"
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: string
 * @needle: part of substring
 * Return: 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b;

	while (needle[b])
	{
		for (a = 0; haystack[a]; a++)
		{
			if (needle[b] == haystack[a])
				return (haystack + a);
		}
		b++;
	}
	return (0);
}
