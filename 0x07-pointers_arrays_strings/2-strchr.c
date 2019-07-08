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
	int n = 0;

	while (s[n])
	{
		if (s[n] == c)
		{
			return (&s[n]);
		}
		else if (s[n] == 0)
		{
			return (0);
		}
		n++;
	}
	return (0);
}
