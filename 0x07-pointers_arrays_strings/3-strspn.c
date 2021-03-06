#include "holberton.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: string
 * @accept: part that should coincide
 *
 * Return: a variable
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (s[a] != accept[b])
			break;
		a++;
	}
	return (a);
}
