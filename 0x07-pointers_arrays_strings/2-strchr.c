#include "holberton.h"
/**
 * _strchr - Write a function that locates a character in a string.
 * @s: pointer
 * @c: character
 * Return: a pointer to the first occurrence of the character/
 * c in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n]; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	if (s[n] == c)
		return (s + n);
	return (0);
}
