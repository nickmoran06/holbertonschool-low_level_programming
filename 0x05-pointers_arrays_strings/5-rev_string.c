#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: pointer
 * Return: any
 */
void rev_string(char *s)
{
	int n = 0, d = 0;
	char step[500];

	while (*(s + d))
	{
		step[d] = s[d];
		d++;
	}
	d = d - 1;
	while (d >= 0)
	{
		s[d] = step[n];
		n++;
		d--;
	}
}
